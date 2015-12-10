// ****
// *
// * #defines for configuring the hydrodynamic model
// *
// * (c) Dr. Stephen J. Bradshaw
// *
// * Source code generated by HYDRAD_GUI on 24-11-2015 18:43:32
// *
// ****

// **** Output ****
#define WRITE_FILE_PHYSICAL
#define OUTPUT_EVERY_N_TIME_STEPS 1000
// **** End of Output ****

// **** Physics ****
// Heating //
#define HEATED_SPECIES 0
// End of Heating //
// Radiation //
#define USE_POWER_LAW_RADIATIVE_LOSSES
// End of Radiation //
// Thermal Conduction //
// End of Thermal Conduction //
// Gravity //
// End of Gravity //
// Collisions //
#define MINIMUM_COLLISIONAL_COUPLING_TIME_SCALE 0.01
// End of Collisions //
// **** End of Physics ****

// **** Solver ****
#define SAFETY_RADIATION 1.0
#define SAFETY_CONDUCTION 1.0
#define SAFETY_ADVECTION 1.0
#define SAFETY_VISCOSITY 1.0
#define TIME_STEP_INCREASE_LIMIT 1.05
#define MINIMUM_RADIATION_TEMPERATURE 2E4
#define ZERO_OVER_TEMPERATURE_INTERVAL 1E3
#define MINIMUM_TEMPERATURE 1E4
// **** End of Solver ****

// **** Grid ****
#define ADAPT
#define MAX_REFINEMENT_LEVEL 12
#define REFINE_ON_DENSITY
#define REFINE_ON_ELECTRON_ENERGY
#define MIN_FRAC_DIFF 0.05
#define MAX_FRAC_DIFF 0.1
#define ENFORCE_CONSERVATION
// **** End of Grid ****
