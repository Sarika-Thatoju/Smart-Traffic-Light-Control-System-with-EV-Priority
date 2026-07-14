# Smart-Traffic-Light-Control-System-with-EV-Priority

📌 Project Overview

The Smart Traffic Light Control System with EV Priority is an Arduino-based intelligent traffic management system developed and simulated using Proteus 8 Professional. The project is designed to provide priority access to Electric Vehicles (EVs) at traffic intersections by dynamically controlling traffic signals.

In this simulation, a push button is used to represent an RFID/GPS-based EV detection system. When an EV is detected, the Arduino immediately changes the traffic signal to green, allowing the EV to pass safely before returning to the normal traffic sequence.

This project demonstrates the basic concept of smart traffic management for future smart city applications.

🎯 Objectives

- Design a smart traffic light control system.
- Provide priority access to Electric Vehicles (EVs).
- Simulate EV detection using a push button.
- Dynamically control traffic signals using Arduino.
- Demonstrate the concept using Proteus simulation.

🔧 Hardware Components

- Arduino UNO
- Red LED
- Yellow LED
- Green LED
- Push Button (Simulates RFID/GPS Detection)
- 220Ω Resistors
- Ground (GND)

  ⚙ Software Requirements

- Arduino IDE
- Proteus 8 Professional

  🚦 System Workflow

-> Normal Traffic Mode

1. Red LED ON (5 seconds)
2. Yellow LED ON (2 seconds)
3. Green LED ON (5 seconds)
4. Repeat continuously

->EV Priority Mode

1. EV is detected (Push Button Pressed)
2. Arduino receives the detection signal.
3. Normal traffic sequence is interrupted.
4. Green signal turns ON immediately.
5. EV passes the intersection safely.
6. Traffic returns to normal operation.

  📊 Features

- Intelligent Traffic Signal Control
- EV Priority System
- Dynamic Traffic Signal Switching
- Arduino-Based Controller
- Proteus Simulation
- Beginner-Friendly Project

  📸 Simulation Output

Normal Traffic Operation

- 🔴 Red Signal
- 🟡 Yellow Signal
- 🟢 Green Signal

EV Priority Mode

- Push Button simulates EV detection.
- Green signal is activated immediately.
- Traffic returns to normal after EV passes.

  📚 Applications

- Smart Cities
- Intelligent Transportation Systems
- Electric Vehicle Infrastructure
- Emergency Vehicle Management
- Traffic Signal Automation
