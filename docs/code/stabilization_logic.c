#include <stdio.h>

void stabilize(float roll_error) {
    float base_speed = 1500;

    float left_motor = base_speed + roll_error;
    float right_motor = base_speed - roll_error;

    printf("Left Motor: %.2f\n", left_motor);
    printf("Right Motor: %.2f\n", right_motor);
}

int main() {
    float roll_error = 20.0; // drone tilted
    stabilize(roll_error);
    return 0;
}
