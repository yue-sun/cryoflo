#include <incflo.H>

using namespace amrex;

void incflo::update_heat (StepType step_type, Vector<MultiFab>& heat_eta)
{
    BL_PROFILE("incflo::update_heat");

    Real new_time = m_cur_time + m_dt;

    if (m_advect_heat)
    {
        // *************************************************************************************
        // Compute diffusion coefficient for heat
        // *************************************************************************************

        // *************************************************************************************
        // Compute explicit diffusive term (if corrector)
        // *************************************************************************************
        if (step_type == StepType::Corrector)
        {
            compute_heat_diff_coeff(GetVecOfPtrs(heat_eta),1);
            if (m_diff_type == DiffusionType::Explicit) {
                compute_laps(get_laps_temp_new(), get_heat_new_const(), GetVecOfConstPtrs(heat_eta));
            }
        }

        // *************************************************************************************
        // Update the heat next (note that dhdt already has rho in it)
        // (rho c_p temp)^new = (rho c_p temp)^old + dt * (
        //                   div(rho c_p temp u) + div (k grad temp) )
        // *************************************************************************************
        if (step_type == StepType::Predictor) {
            heat_explicit_update();
        } else if (step_type == StepType::Corrector) {
            heat_explicit_update_corrector();
        }

        // *************************************************************************************
        // Solve diffusion equation for heat
        // *************************************************************************************
        if (m_diff_type == DiffusionType::Crank_Nicolson || m_diff_type == DiffusionType::Implicit)
        {
            const int ng_diffusion = 1;
            for (int lev = 0; lev <= finest_level; ++lev)
            {
                fillphysbc_temp(lev, new_time, m_leveldata[lev]->temp, ng_diffusion);
                fillphysbc_heat(lev, new_time, m_leveldata[lev]->heat, ng_diffusion);
            }

            Real dt_diff = (m_diff_type == DiffusionType::Implicit) ? m_dt : Real(0.5)*m_dt;
            diffuse_scalar(get_temp_new(), get_density_new(), GetVecOfConstPtrs(heat_eta), dt_diff);
        }
        else
        {
            // Need to average down heat since the diffusion solver didn't do it for us.
            for (int lev = finest_level-1; lev >= 0; --lev) {
#ifdef AMREX_USE_EB
                amrex::EB_average_down(m_leveldata[lev+1]->heat, m_leveldata[lev]->heat,
                                       0, 1, refRatio(lev));
#else
                amrex::average_down(m_leveldata[lev+1]->heat, m_leveldata[lev]->heat,
                                    0, 1, refRatio(lev));
#endif
            }
        }
    } // advect heat
}
