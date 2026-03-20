# My understanding

Initially, I thought drone works by just giving commands.

But after working with Pixhawk, I understood that:
- Drone is continuously correcting itself
- Sensors and motors are tightly connected
- Stability is not fixed, it is dynamic

The most important realization was that even small tilt is instantly corrected using motor speed change.
