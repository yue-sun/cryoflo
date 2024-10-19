#include <incflo.H>

using namespace amrex;

Vector<MultiFab*> incflo::get_velocity_eb () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->velocity_eb));
    }
    return r;
}

Vector<MultiFab*> incflo::get_density_eb () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density_eb));
    }
    return r;
}

Vector<MultiFab*> incflo::get_tracer_eb () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->tracer_eb));
    }
    return r;
}

Vector<MultiFab*> incflo::get_temp_eb () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->temp_eb));
    }
    return r;
}

Vector<MultiFab*> incflo::get_heat_eb () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->heat_eb));
    }
    return r;
}

Vector<MultiFab*> incflo::get_velocity_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->velocity_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_velocity_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->velocity));
    }
    return r;
}

Vector<MultiFab*> incflo::get_density_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_density_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density));
    }
    return r;
}

Vector<MultiFab*> incflo::get_density_nph () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density_nph));
    }
    return r;
}

Vector<MultiFab*> incflo::get_tracer_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->tracer_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_tracer_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->tracer));
    }
    return r;
}

Vector<MultiFab*> incflo::get_temp_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->temp_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_temp_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->temp));
    }
    return r;
}

Vector<MultiFab*> incflo::get_heat_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->heat_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_heat_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->heat));
    }
    return r;
}

Vector<MultiFab*> incflo::get_vhc_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->vhc_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_vhc_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->vhc));
    }
    return r;
}

Vector<MultiFab*> incflo::get_mac_phi() noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->mac_phi));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_velocity_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_velocity_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_velocity_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_velocity));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_density_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_density_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_density_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_density));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_tracer_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_tracer_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_tracer_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_tracer));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_heat_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_heat_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_conv_heat_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->conv_heat));
    }
    return r;
}

Vector<MultiFab*> incflo::get_divtau_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->divtau_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_divtau_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->divtau));
    }
    return r;
}

Vector<MultiFab*> incflo::get_laps_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->laps_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_laps_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->laps));
    }
    return r;
}

Vector<MultiFab*> incflo::get_laps_temp_old () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->laps_temp_o));
    }
    return r;
}

Vector<MultiFab*> incflo::get_laps_temp_new () noexcept
{
    Vector<MultiFab*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->laps_temp));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_velocity_old_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->velocity_o));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_velocity_new_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->velocity));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_density_old_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density_o));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_density_new_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_density_nph_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->density_nph));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_tracer_old_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->tracer_o));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_tracer_new_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->tracer));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_temp_old_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->temp_o));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_temp_new_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->temp));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_heat_old_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->heat_o));
    }
    return r;
}

Vector<MultiFab const*> incflo::get_heat_new_const () const noexcept
{
    Vector<MultiFab const*> r;
    r.reserve(finest_level+1);
    for (int lev = 0; lev <= finest_level; ++lev) {
        r.push_back(&(m_leveldata[lev]->heat));
    }
    return r;
}

void incflo::copy_from_new_to_old_velocity (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_new_to_old_velocity(lev, ng);
    }
}

void incflo::copy_from_new_to_old_velocity (int lev, IntVect const& ng)
{
    MultiFab::Copy(m_leveldata[lev]->velocity_o,
                   m_leveldata[lev]->velocity, 0, 0, AMREX_SPACEDIM, ng);
}

void incflo::copy_from_old_to_new_velocity (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_old_to_new_velocity(lev, ng);
    }
}

void incflo::copy_from_old_to_new_velocity (int lev, IntVect const& ng)
{
    MultiFab::Copy(m_leveldata[lev]->velocity,
                   m_leveldata[lev]->velocity_o, 0, 0, AMREX_SPACEDIM, ng);
}

void incflo::copy_from_new_to_old_density (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_new_to_old_density(lev, ng);
    }
}

void incflo::copy_from_new_to_old_density (int lev, IntVect const& ng)
{
    MultiFab::Copy(m_leveldata[lev]->density_o,
                   m_leveldata[lev]->density, 0, 0, 1, ng);
}

void incflo::copy_from_old_to_new_density (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_old_to_new_density(lev, ng);
    }
}

void incflo::copy_from_old_to_new_density (int lev, IntVect const& ng)
{
    MultiFab::Copy(m_leveldata[lev]->density,
                   m_leveldata[lev]->density_o, 0, 0, 1, ng);
}

void incflo::copy_from_new_to_old_tracer (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_new_to_old_tracer(lev, ng);
    }
}

void incflo::copy_from_new_to_old_tracer (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->tracer_o,
                       m_leveldata[lev]->tracer, 0, 0, m_ntrac, ng);
    }
}

void incflo::copy_from_old_to_new_tracer (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_old_to_new_tracer(lev, ng);
    }
}

void incflo::copy_from_old_to_new_tracer (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->tracer,
                       m_leveldata[lev]->tracer_o, 0, 0, m_ntrac, ng);
    }
}

void incflo::copy_from_new_to_old_temp (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_new_to_old_temp(lev, ng);
    }
}

void incflo::copy_from_new_to_old_temp (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->temp_o,
                       m_leveldata[lev]->temp, 0, 0, 1, ng);
    }
}

void incflo::copy_from_old_to_new_temp (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_old_to_new_temp(lev, ng);
    }
}

void incflo::copy_from_old_to_new_temp (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->temp,
                       m_leveldata[lev]->temp_o, 0, 0, 1, ng);
    }
}

void incflo::copy_from_new_to_old_heat (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_new_to_old_heat(lev, ng);
    }
}

void incflo::copy_from_new_to_old_heat (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->heat_o,
                       m_leveldata[lev]->heat, 0, 0, 1, ng);
    }
}

void incflo::copy_from_old_to_new_heat (IntVect const& ng)
{
    for (int lev = 0; lev <= finest_level; ++lev) {
        copy_from_old_to_new_heat(lev, ng);
    }
}

void incflo::copy_from_old_to_new_heat (int lev, IntVect const& ng)
{
    if (m_ntrac > 0) {
        MultiFab::Copy(m_leveldata[lev]->heat,
                       m_leveldata[lev]->heat_o, 0, 0, 1, ng);
    }
}
