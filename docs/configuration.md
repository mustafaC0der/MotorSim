
# Configuration Details

This document outlines the configuration files used in the motorbike simulation project. Proper configuration is essential for accurate simulation results.

## Configuration Files

The configuration files are located in the `config/` directory and include:

### 1. `boundary_conditions.json`

This file defines the boundary conditions for the simulation. It specifies the parameters related to airflow, temperature, and surface interactions. Here is an example structure of `boundary_conditions.json`:

```json
{
  "boundary_conditions": {
    "inlet": {
      "velocity": 15.0,
      "temperature": 300.0
    },
    "outlet": {
      "pressure": 101325
    },
    "walls": {
      "friction_coefficient": 0.03
    }
  }
}
```

- **inlet**: Defines the velocity and temperature of the incoming air at the inlet of the simulation.
- **outlet**: Specifies the pressure at the outlet of the simulation domain.
- **walls**: Defines the friction coefficient of the walls for fluid flow.

### 2. `simulation_settings.json`

This file contains the settings for the simulation, such as solver parameters, iteration count, and other important configuration details. Here is an example structure of `simulation_settings.json`:

```json
{
  "solver": {
    "tolerance": 1e-6,
    "max_iterations": 1000
  },
  "time_stepping": {
    "time_step": 0.01,
    "end_time": 100.0
  },
  "simulation_type": "steady_state"
}
```

- **solver**:
  - **tolerance**: The numerical tolerance for the solver. This determines when the solver should stop based on the difference between successive iterations.
  - **max_iterations**: The maximum number of iterations to run for the simulation.
- **time_stepping**:
  - **time_step**: The time increment for each simulation step.
  - **end_time**: The total time for the simulation.
- **simulation_type**: Defines the type of simulation (e.g., "steady_state" or "transient").

## Customizing the Configuration Files

You can modify these configuration files according to your specific needs for the simulation. Make sure the parameters align with the conditions and settings that you want to simulate.

### Example: Setting Up for Different Weather Conditions

If you want to simulate a scenario with strong winds, you can modify the `boundary_conditions.json` file as follows:

```json
{
  "boundary_conditions": {
    "inlet": {
      "velocity": 30.0,
      "temperature": 280.0
    },
    "outlet": {
      "pressure": 101325
    },
    "walls": {
      "friction_coefficient": 0.05
    }
  }
}
```

This would simulate higher wind speeds (30 m/s) and a cooler temperature (280 K) at the inlet.

## Conclusion

Proper configuration is crucial for accurate simulation results. Make sure to review the configuration files and adjust the parameters based on the specific scenario you're simulating. If you encounter issues or need further customization, refer to the troubleshooting guide or contact the project maintainers.
