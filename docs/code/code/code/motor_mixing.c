#include <stdio.h>

void motor_mix(float throttle, float roll, float pitch) {
    float m1 = throttle + roll + pitch;
    float m2 = throttle - roll + pitch;
    float m3 = throttle - roll - pitch;
    float m4 = throttle + roll - pitch;

    printf("M1: %.2f\nM2: %.2f\nM3: %.2f\nM4: %.2f\n", m1, m2, m3, m4);
}

int main() {
    motor_mix(1500, 20, -10);
    return 0;
}
