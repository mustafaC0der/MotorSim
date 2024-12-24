#include <math.h>

double calculate_air_drag(double velocity, double drag_coefficient, double frontal_area, double air_density, double humidity, double temperature) {
    // Adjust air density based on temperature and humidity
    double adjusted_air_density = air_density * (1 - 0.002 * humidity) * (1 + 0.003 * (temperature - 20));
    
    // Adjust drag coefficient dynamically (example: decreases with higher velocity)
    double dynamic_drag_coefficient = drag_coefficient * (1 + 0.1 * log(velocity + 1));
    
    // Calculate air drag
    double air_drag = 0.5 * dynamic_drag_coefficient * frontal_area * adjusted_air_density * pow(velocity, 2);
    return air_drag;
}
