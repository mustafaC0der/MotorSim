#include <math.h>

void track_particle(double *position, double *velocity, double drag_force, double mass, double gravity, double time_step) {
    // Calculate acceleration (drag and gravity)
    double acceleration = (drag_force / mass) - gravity;

    // Update velocity and position using basic physics equations
    velocity[0] += acceleration * time_step;
    position[0] += velocity[0] * time_step;
}
