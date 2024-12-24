double calculate_rolling_resistance(double weight, double rolling_coefficient, double terrain_factor, double tire_pressure) {
    // Adjust rolling coefficient based on terrain (e.g., rough roads increase resistance)
    double adjusted_rolling_coefficient = rolling_coefficient * terrain_factor;

    // Factor in tire pressure (lower pressure increases rolling resistance)
    if (tire_pressure < 30) {
        adjusted_rolling_coefficient *= 1.2; // Increase resistance for low pressure
    }

    // Calculate rolling resistance
    double rolling_resistance = weight * adjusted_rolling_coefficient;
    return rolling_resistance;
}
