# 🚗 Smart Parking System Using Arduino UNO

## 📌 Project Overview

The Smart Parking System is an Arduino UNO-based project designed to detect vehicle presence in a parking slot using an HC-SR04 Ultrasonic Sensor. The system continuously monitors the parking space and indicates whether the slot is available or occupied using LEDs, a buzzer, and a 16x2 LCD display.

This project demonstrates real-time distance measurement and smart parking management concepts used in modern smart city applications.

---

## 🎯 Objectives

- Detect vehicle presence in a parking slot.
- Display parking slot status in real time.
- Provide visual and audio indications.
- Improve parking space management.
- Learn ultrasonic sensor interfacing with Arduino.

---

## 🛠 Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Green LED
- Red LED
- Piezo Buzzer
- 220Ω Resistors
- Breadboard
- Jumper Wires

---

## ⚙️ Working Principle

The HC-SR04 Ultrasonic Sensor continuously measures the distance between the sensor and an object.

### 🟢 Parking Available
- Green LED ON
- Red LED OFF
- Buzzer OFF
- LCD displays "Parking Available"

### 🔴 Parking Occupied
- Red LED ON
- Green LED OFF
- Buzzer sounds once when a vehicle enters
- LCD displays "Parking Occupied"

The system automatically updates the parking status based on the measured distance.

---

## 🔌 Connections

### HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### LEDs

| Component | Arduino Pin |
|-----------|-------------|
| Green LED | D2 |
| Red LED | D3 |

### Buzzer

| Component | Arduino Pin |
|-----------|-------------|
| Buzzer (+) | D4 |
| Buzzer (-) | GND |

### LCD Display

| LCD Pin | Arduino Pin |
|----------|-------------|
| RS | D12 |
| E | D11 |
| DB4 | D5 |
| DB5 | D6 |
| DB6 | D7 |
| DB7 | D8 |
| VSS | GND |
| VDD | 5V |
| RW | GND |
| VO | GND |
| LED+ | 5V |
| LED- | GND |

---

## 🚀 Features

- Real-Time Parking Monitoring
- Ultrasonic Distance Measurement
- LCD Status Display
- Vehicle Detection System
- Visual LED Indicators
- Audio Alert System
- Smart Parking Concept

---

## 🌍 Applications

- Smart Parking Systems
- Shopping Malls
- Residential Parking Areas
- Smart Cities
- Office Buildings
- Vehicle Monitoring Systems

---

## ✅ Advantages

- Low Cost Implementation
- Easy Installation
- Real-Time Monitoring
- Efficient Parking Management
- Beginner-Friendly Project
- Expandable for Multiple Parking Slots

---

## 🔄 System Flow

1. Measure distance using Ultrasonic Sensor.
2. Detect vehicle presence.
3. Determine parking slot status.
4. Display status on LCD.
5. Activate corresponding LED.
6. Trigger buzzer when a vehicle enters the slot.

---

## 🔮 Future Enhancements

- Multi-Slot Parking Management
- IoT-Based Monitoring
- Mobile Application Integration
- Cloud Data Storage
- RFID Vehicle Identification
- Smart Parking Reservation System

---

## 👨‍💻 Author

**Manas Varanasi**

### 🚀 45 Days Embedded & Electronics Challenge

**Day 10 of 45 - Smart Parking System Using Arduino UNO**

*Building Practical Electronics & Embedded Systems Projects Every Day.*