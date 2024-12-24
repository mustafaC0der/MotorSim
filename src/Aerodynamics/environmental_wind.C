#include <math.h>

double calculate_effective_velocity(double velocity, double wind_speed, double wind_angle_degrees) {
    // Convert wind angle from degrees to radians
    double wind_angle_radians = wind_angle_degrees * (M_PI / 180.0);

    // Calculate components of wind relative to the bike's direction
    double headwind_component = wind_speed * cos(wind_angle_radians);
    double crosswind_component = wind_speed * sin(wind_angle_radians);

    // Effective velocity considering headwind or tailwind
    double effective_velocity = velocity + headwind_component;

    // Output crosswind effect (could impact balance)
    printf("Crosswind Effect: %.2f m/s\n", crosswind_component);

    return effective_velocity;
}
