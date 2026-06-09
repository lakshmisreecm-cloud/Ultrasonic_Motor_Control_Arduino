# Ultrasonic Motor Control Using Arduino

## Overview
This project controls two DC motors using an HC-SR04 ultrasonic sensor and an L298N motor driver.

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- L298N Motor Driver
- 2 DC Motors
- HC-05 Bluetooth Module
- Red LED
- Blue LED
- Jumper Wires

## Working
- Distance > 5 cm:
  - Motors run
  - Blue LED ON

- Distance <= 5 cm:
  - Motors stop
  - Red LED ON

- Distance data can be monitored using HC-05 Bluetooth on a mobile phone.
- ## Circuit Diagram

![Circuit Diagram](circuit.png)

## Author
SREELAKSHMI C M
