# Smart Autonomous Rescue Robot with Joystick Remote Control

## 🚑 Project Overview
The Smart Autonomous Rescue Robot is an advanced Arduino-based robotic system designed for rescue, safety, and surveillance applications. The robot supports **manual joystick control via Bluetooth** and **autonomous object detection**, making it suitable for real-world disaster and hazard scenarios.

This project combines robotics, embedded systems, and intelligent decision-making.

---

## ✨ Key Features
- Joystick-based Bluetooth remote control
- Autonomous obstacle detection and avoidance
- Human detection using PIR sensor
- Fire detection using flame sensor
- Gas leakage detection using MQ sensor
- Servo-based environmental scanning
- Emergency buzzer alerts
- Dual mode operation (Manual & Auto)

---

## 🧠 Modes of Operation

### 🔹 Manual Mode
- Controlled using a joystick Bluetooth remote
- Smooth left, right, forward, and backward movement
- Ideal for human-operated navigation

### 🔹 Autonomous Mode
- Robot moves independently
- Detects obstacles using ultrasonic sensor
- Scans left and right using servo motor
- Chooses safest direction automatically

### 🔹 Safety Mode
- Automatically stops on danger detection
- Alerts user using buzzer
- Detects:
  - Human presence
  - Fire
  - Gas leakage

---

## 🧩 Hardware Components
- Arduino UNO / Nano
- L298N Motor Driver
- DC Motors with Robot Chassis
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90)
- PIR Sensor
- Flame Sensor
- MQ-2 Gas Sensor
- HC-05 Bluetooth Module
- Joystick Module
- Buzzer
- Battery (7.4V – 12V)

---

## 🔌 Pin Configuration (Robot)

| Component | Arduino Pin |
|---------|-------------|
| Ultrasonic TRIG | 2 |
| Ultrasonic ECHO | 3 |
| Servo Motor | 4 |
| Motor ENA | 5 |
| Motor ENB | 6 |
| Motor IN1–IN4 | 8–11 |
| PIR Sensor | 12 |
| Buzzer | 13 |
| Flame Sensor | A0 |
| Gas Sensor | A1 |

---

## 🎮 Joystick Remote Pins

| Joystick | Arduino |
|--------|---------|
| VRx | A0 |
| VRy | A1 |
| Auto Button | 7 |
| Manual Button | 8 |

---

## 📡 Bluetooth Commands

| Command | Action |
|-------|--------|
| F | Move Forward |
| B | Move Backward |
| L | Turn Left |
| R | Turn Right |
| S | Stop |
| A | Autonomous Mode |
| M | Manual Mode |

---

## ⚙️ Working Principle
1. Joystick sends directional commands via Bluetooth  
2. Arduino processes commands or sensor data  
3. Motor driver controls wheel movement  
4. Sensors continuously monitor surroundings  
5. Robot reacts intelligently to obstacles and dangers  

---

## 🚀 Applications
- Disaster rescue operations
- Fire and gas hazard inspection
- Industrial safety monitoring
- Smart surveillance
- Robotics competitions & hackathons

---

## 🔮 Future Enhancements
- ESP32-CAM for live video streaming
- IoT dashboard with real-time alerts
- GPS tracking
- Voice control
- AI-based human recognition

---

## 🏁 Conclusion
This project demonstrates a smart robotic system capable of autonomous decision-making and precise manual control. It highlights the integration of sensors, communication modules, and control algorithms to solve real-world safety challenges.

---

## 👨‍💻 Author
Achuthan Rameshkumar
# Joystick-Bluetooth-Remote
