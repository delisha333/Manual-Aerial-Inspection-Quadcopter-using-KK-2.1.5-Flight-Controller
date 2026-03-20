# 🚁 Manual Aerial Inspection Quadcopter using KK 2.1.5

## Problem Statement
Manual inspection of small areas (fields, rooftops, structures) is time-consuming and limited by ground-level visibility.

A simple aerial system can provide a better view and faster inspection.

---

## Proposed Solution
This project implements a quadcopter drone using the KK 2.1.5 flight controller to perform manual aerial inspection.

The system provides:
- Stable flight using onboard sensors
- Real-time manual control
- Aerial visibility for inspection tasks

---

## Flight Controller Used
The system uses the KK 2.1.5 flight controller.

- Stabilization using gyroscope and accelerometer
- Configuration using onboard LCD interface
- No external ground station required

---

## System Overview
The drone works as a feedback stabilization system:

Sensor → Controller → Motor → Correction

The KK controller continuously adjusts motor speeds to maintain balance.

---

## My Contribution
- Assembled full quadcopter hardware (frame, motors, ESC)
- Integrated KK 2.1.5 flight controller
- Performed ESC calibration and motor testing
- Tuned stabilization parameters using onboard interface
- Understood system-level behavior of drone stabilization

---

## Application Use Case
- Field inspection
- Rooftop inspection
- Small-area aerial monitoring

---

## What I Learned
- How stabilization works in drones
- How motor speed affects orientation
- Importance of calibration
- Real-world challenges in hardware integration

---

## Future Scope
- Upgrade to Pixhawk-based autonomous system
- Add camera for live monitoring
- Implement semi-autonomous flight

---

## Author
Delisha Singh
