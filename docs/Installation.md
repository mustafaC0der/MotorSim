# Installation Instructions

Follow the steps below to set up the motorbike simulation project on your local machine.

## Prerequisites

Before you begin, ensure that you have the following installed:

### Software

- **C Compiler**: GCC or any compatible C compiler.  
  Install GCC by following these instructions:
  - **Windows**: Download and install MinGW from [MinGW-w64](http://mingw-w64.org/).
  - **macOS**: Install Xcode Command Line Tools by running `xcode-select --install` in the terminal.
  - **Linux**: Install GCC using the package manager:
    - Ubuntu/Debian: `sudo apt install build-essential`
    - Fedora: `sudo dnf install gcc`

- **Python 3.x**: You need Python 3 and `pip` to install required Python libraries.
  Install Python from [python.org](https://www.python.org/downloads/) or use a package manager:
  - **Windows**: Download from [python.org](https://www.python.org/downloads/).
  - **macOS**: Use Homebrew with `brew install python`.
  - **Linux**: Install Python using your package manager:
    - Ubuntu/Debian: `sudo apt install python3 python3-pip`
    - Fedora: `sudo dnf install python3`

### Python Libraries

After installing Python, install the necessary Python libraries by running:

```bash
pip install matplotlib
```

This will install `matplotlib`, which is used for postprocessing and visualizing the simulation results.

## Setup Instructions

### 1. Clone the Repository

First, clone the repository to your local machine:

```bash
git clone https://github.com/your-username/motorbike-simulation.git
cd motorbike-simulation
```

### 2. Compile the Source Code

The simulation's core logic is written in C. To compile the source code, use GCC or your preferred C compiler.

Run the following command to compile the simulation files:

```bash
gcc -o simulation     src/aerodynamics/air_drag.c     src/thermal_analysis/heat_transfer.c     src/fluid_dynamics/fluid_flow_solver.c     src/postprocessing/post_processing.c
```

This will generate an executable file named `simulation`.

### 3. Run Preprocessing

Run the preprocessing script to validate the configuration files before running the simulation:

```bash
python scripts/preprocess.py
```

This will check the configuration files in the `config/` directory, such as `boundary_conditions.json` and `simulation_settings.json`, for any errors or missing information.

### 4. Run the Simulation

Now that everything is set up, you can run the simulation:

```bash
./simulation
```

The program will execute the simulation based on the defined parameters and configurations.

### 5. Postprocess the Results

After the simulation has completed, you can run the postprocessing script to analyze and visualize the results:

```bash
python scripts/postprocess.py
```

This script will generate output files or plots to help you interpret the simulation data.

## Configuration Files

The configuration files can be found in the `config/` directory:

- **`boundary_conditions.json`**: Defines the boundary conditions for the simulation, such as airflow parameters and surface temperatures.
- **`simulation_settings.json`**: Contains the settings for the simulation, including solver parameters and iteration details.

Make sure to review and modify these files as needed before running the simulation.

## Troubleshooting

If you encounter any issues during installation or while running the simulation, refer to the [TROUBLESHOOTING.md](docs/TROUBLESHOOTING.md) for common problems and solutions.

For additional help, feel free to open an issue on the project's GitHub repository.

---

## Conclusion

You have now set up and are ready to run the motorbike simulation. If you have any questions or suggestions for improvements, please feel free to contribute to the project or reach out through the GitHub issues page.
