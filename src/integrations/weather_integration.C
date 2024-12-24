double integrate_weather(double base_velocity, double wind_speed, double wind_direction) {
    return base_velocity + wind_speed * cos(wind_direction);
}
