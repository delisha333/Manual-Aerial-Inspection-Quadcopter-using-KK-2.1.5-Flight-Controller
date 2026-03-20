# 🚁 End-to-End UAV System using Pixhawk

## 📌 Abstract
This project presents a complete UAV system design including embedded firmware, control algorithms, and hardware interfacing using Pixhawk.

## 🎯 Objectives
- Design stable flight system
- Implement PWM-based ESC control
- Integrate IMU + GPS
- Develop basic control algorithms

## 🧠 System Understanding
The UAV system consists of:
- Flight Controller (Pixhawk)
- Sensor Suite (IMU, GPS)
- Actuators (BLDC + ESC)
- Control Loop (PID)

## ⚙️ Working Principle
1. Sensors collect orientation data
2. Controller processes error
3. PWM signals adjust motor speed
4. Drone stabilizes

## 🧮 Control System (Important)
PID Control used:

Error = Setpoint - Actual

Output = Kp*e + Ki∫e + Kd(de/dt)

## 🔌 Hardware Architecture
(Add diagram)

## 💻 Firmware Modules
- PWM Driver
- Sensor Interface
- Control Logic
- Navigation Logic

## 📊 Results
- Stable hover achieved
- Response time improved

## 🚀 Future Scope
- AI navigation
- Vision-based tracking
- Autonomous landing

## 👩‍💻 Author
Delisha Singh
