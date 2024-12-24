#include <math.h>

double calculate_pressure_drop(double density, double velocity, double pipe_diameter) {
    double area = M_PI * pow(pipe_diameter / 2.0, 2);
    double dynamic_pressure = 0.5 * density * pow(velocity, 2);
    return dynamic_pressure;
}
