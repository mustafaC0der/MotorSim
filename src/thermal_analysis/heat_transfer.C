#include <math.h>

double calculate_heat_loss(double engine_temperature, double ambient_temperature, double heat_transfer_coefficient, double surface_area) {
    // Conduction loss
    double conduction_loss = heat_transfer_coefficient * surface_area * (engine_temperature - ambient_temperature);

    // Radiation loss (Stefan-Boltzmann Law approximation)
    double stefan_boltzmann_constant = 5.67e-8; // W/(m²K⁴)
    double emissivity = 0.9; // Surface emissivity
    double radiation_loss = emissivity * stefan_boltzmann_constant * surface_area *
                            (pow(engine_temperature + 273.15, 4) - pow(ambient_temperature + 273.15, 4));

    // Total heat loss
    double total_heat_loss = conduction_loss + radiation_loss;
    return total_heat_loss;
}
