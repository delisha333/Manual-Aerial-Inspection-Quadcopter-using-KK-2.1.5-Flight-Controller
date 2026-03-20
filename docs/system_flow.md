# How the drone works

The drone follows a continuous loop:

1. IMU senses orientation (tilt, rotation)
2. Pixhawk processes this data
3. Error is calculated (difference from stable position)
4. PWM signals are sent to ESC
5. Motors adjust speed to correct tilt

This loop runs continuously to maintain stability.
