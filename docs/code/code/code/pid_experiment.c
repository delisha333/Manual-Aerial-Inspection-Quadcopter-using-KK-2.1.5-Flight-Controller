#include <stdio.h>

float Kp = 1.2;
float Ki = 0.01;
float Kd = 0.5;

float prev_error = 0;
float integral = 0;

float pid(float setpoint, float actual) {
    float error = setpoint - actual;
    integral += error;
    float derivative = error - prev_error;

    float output = Kp*error + Ki*integral + Kd*derivative;

    prev_error = error;
    return output;
}

int main() {
    float output = pid(0, 10);
    printf("Correction: %f\n", output);
    return 0;
}
