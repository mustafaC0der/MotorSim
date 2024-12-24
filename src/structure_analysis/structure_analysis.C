#include <math.h>

double calculate_stress(double force, double cross_sectional_area) {
    return force / cross_sectional_area;
}

double calculate_strain(double stress, double youngs_modulus) {
    return stress / youngs_modulus;
}

double calculate_deformation(double original_length, double strain) {
    return original_length * strain;
}
