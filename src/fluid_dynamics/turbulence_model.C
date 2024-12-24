double calculate_turbulence(double velocity, double characteristic_length, double viscosity, double turbulent_kinetic_energy, double turbulent_dissipation_rate) {
    // Reynolds number
    double reynolds_number = (velocity * characteristic_length) / viscosity;

    // Turbulent intensity (approximation)
    double turbulence_intensity = 0.16 * pow(reynolds_number, -1.0 / 8.0);

    // Eddy viscosity (k-ε model approximation)
    double eddy_viscosity = 0.09 * pow(turbulent_kinetic_energy, 2) / turbulent_dissipation_rate;

    // Return turbulence effect
    return turbulence_intensity * eddy_viscosity;
}
