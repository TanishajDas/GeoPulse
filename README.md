# 🚲 Geo Pulse: ESP32-Based Real-Time Vehicle Tracking System

## 📍 Overview

Wheel Watch is a lightweight, real-time **GPS tracking system** built using the **ESP32 microcontroller**, **Neo-6M GPS module**, and an **OLED display**, with **Remote monitoring through the Blynk mobile app**. The project enhances vehicle security by allowing users to track their vehicle’s location in real-time from anywhere in the world.

## 🧩 Features

- 🌐 **Live GPS Tracking**
  -  Real-time location alerts via Blynk App
  -  On-device OLED display for instant feedback
  -  Low power consumption with battery options
  -  Smartphone integration with Blynk Cloud


### 🔧 Hardware
- ESP32 DevKit V1
- Neo-6M GPS Module
- SH1106 OLED Display (1.3")
- Jumper wires, breadboard, power supply

### 🧠 Software
- Arduino IDE (v1.8.19+)
- Blynk App (iOS/Android)
- Libraries:
  - TinyGPS++
  - Blynk
  - Adafruit_GFX
  - SH1106
  - WiFi (ESP32 built-in)

## 📷 Hardware Setup

> *ESP32* ←→ *Neo-6M GPS (TX/RX)*  
> *ESP32* ←→ *OLED (I2C SDA/SCL)*  
> *Power* via USB or LiPo battery

![Hardware Setup](https://your-uploaded-image-link)

---

## 💻 Code Summary

```cpp
// Receives GPS data and transmits via Blynk
Blynk.virtualWrite(V1, gps.location.lat());
Blynk.virtualWrite(V2, gps.location.lng());
Blynk.virtualWrite(V3, gps.course.deg());
