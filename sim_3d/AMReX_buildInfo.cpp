
namespace amrex {

const char* buildInfoGetBuildDate() {

  static const char BUILD_DATE[] = "2024-09-28 14:50:41.616553";
  return BUILD_DATE;
}

const char* buildInfoGetBuildDir() {

  static const char BUILD_DIR[] = "/Users/yuesun/code/cryo_plunge_dev/cryoflo/sim_3d";
  return BUILD_DIR;
}

const char* buildInfoGetBuildMachine() {

  static const char BUILD_MACHINE[] = "Darwin Yues-Mac-mini.local 24.0.0 Darwin Kernel Version 24.0.0: Mon Aug 12 20:52:12 PDT 2024; root:xnu-11215.1.10~2/RELEASE_ARM64_T6020 arm64";
  return BUILD_MACHINE;
}

const char* buildInfoGetAMReXDir() {

  static const char AMREX_DIR[] = "../../amrex";
  return AMREX_DIR;
}

const char* buildInfoGetComp() {

  static const char COMP[] = "gnu";
  return COMP;
}

const char* buildInfoGetCompVersion() {

  static const char COMP_VERSION[] = "16.0.0";
  return COMP_VERSION;
}

// deprecated
const char* buildInfoGetFcomp() {

  static const char FCOMP[] = "";
  return FCOMP;
}

// deprecated
const char* buildInfoGetFcompVersion() {

  static const char FCOMP_VERSION[] = "";
  return FCOMP_VERSION;
}

const char* buildInfoGetCXXName() {

  static const char CXX_comp_name[] = "mpicxx";
  return CXX_comp_name;
}

const char* buildInfoGetFName() {

  static const char F_comp_name[] = "mpif90";
  return F_comp_name;
}

const char* buildInfoGetCXXFlags() {

  static const char CXX_flags[] = " -Werror=return-type -gdwarf-4 -O3 -finline-limit=43210 -std=c++17  -rdynamic -fno-omit-frame-pointer -pthread  -DAMREX_EXPORT_DYNAMIC  -DBL_USE_MPI -DAMREX_USE_MPI -DBL_NO_FORT -DAMREX_GPU_MAX_THREADS=0 -DBL_SPACEDIM=3 -DAMREX_SPACEDIM=3 -DBL_FORT_USE_UNDERSCORE -DAMREX_FORT_USE_UNDERSCORE -DBL_Darwin -DAMREX_Darwin -DAMREX_USE_EB -DAMREX_XSDK -DNDEBUG -DOMPI_SKIP_MPICXX -Itmp_build_dir/s/3d.gnu.MPI.EB.EXE -I. -I../src -I../src/boundary_conditions -I../src/convection -I../src/derive -I../src/diffusion -I../src/prob -I../src/projection -I../src/rheology -I../src/setup -I../src/utilities -I../src/embedded_boundaries -I../../AMReX-Hydro/BDS -I../../AMReX-Hydro/Godunov -I../../AMReX-Hydro/MOL -I../../AMReX-Hydro/Projections -I../../AMReX-Hydro/Utils -I../../AMReX-Hydro/EBMOL -I../../AMReX-Hydro/EBGodunov -I../../amrex/Src/Base -I../../amrex/Src/Base/Parser -I../../amrex/Src/AmrCore -I../../amrex/Src/Boundary -I../../amrex/Src/LinearSolvers/MLMG -I../../amrex/Src/EB -I../../amrex/Tools/C_scripts ";
  return CXX_flags;
}

const char* buildInfoGetFFlags() {

  static const char F_flags[] = " -g -O3 -ffree-line-length-none -fno-range-check -fno-second-underscore -fimplicit-none ";
  return F_flags;
}

const char* buildInfoGetLinkFlags() {

  static const char link_flags[] = "-L. ";
  return link_flags;
}

const char* buildInfoGetLibraries() {

  static const char libraries[] = " -ldl -L/opt/homebrew/Cellar/open-mpi/5.0.3_1/lib -lmpi ";
  return libraries;
}

const char* buildInfoGetAux(int i) {

  //static const char AUX1[] = "${AUX[1]}";

  static const char EMPT[] = "";

  switch(i)
  {

    default: return EMPT;
  }
}

int buildInfoGetNumModules() {
  // int const num_modules = X;
  int const num_modules = 0;

  return num_modules;
}

const char* buildInfoGetModuleName(int i) {

  //static const char MNAME1[] = "${MNAME[1]}";

  static const char EMPT[] = "";

  switch(i)
  {

    default: return EMPT;
  }
}

const char* buildInfoGetModuleVal(int i) {

  //static const char MVAL1[] = "${MVAL[1]}";

  static const char EMPT[] = "";

  switch(i)
  {

    default: return EMPT;
  }
}

const char* buildInfoGetGitHash(int i) {

  //static const char HASH1[] = "${GIT[1]}";
  static const char HASH1[] = "cddb035-dirty";
  static const char HASH2[] = "24.09-40-g467dd681a";

  static const char EMPT[] = "";

  switch(i)
  {
    case 1: return HASH1;
    case 2: return HASH2;

    default: return EMPT;
  }
}

const char* buildInfoGetBuildGitHash() {

  //static const char HASH[] = "${GIT}";
  static const char HASH[] = "";


  return HASH;
}

const char* buildInfoGetBuildGitName() {

  //static const char NAME[] = "";
  static const char NAME[] = "";


  return NAME;
}

#ifdef AMREX_USE_CUDA
const char* buildInfoGetCUDAVersion() {

  static const char CUDA_VERSION[] = "";
  return CUDA_VERSION;
}
#endif

}
