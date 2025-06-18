# 🚲 Geo Pulse: ESP32-Based Real-Time Vehicle Tracking System

GeoPulse is a lightweight, real-time **GPS tracking system** built using the **ESP32 microcontroller**, **Neo-6M GPS module**, and an **OLED display**, with **Remote monitoring through the Blynk mobile app**. The project enhances vehicle security by allowing users to track their vehicle’s location in real-time from anywhere in the world.

## 🧩 Features

- 🌐 **Live GPS Tracking**
  -  Real-time location alerts via Blynk App
  -  On-device OLED display for instant feedback
  -  Low power consumption with battery options
  -  Smartphone integration with Blynk Cloud


### Hardware
- ESP32 DevKit V1
- Neo-6M GPS Module
- SH1106 OLED Display (1.3")
- Jumper wires, breadboard, power supply

### Software
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

💡System Architecture:

![dwdw](https://github.com/user-attachments/assets/5925f784-8a4c-417e-97d2-8f0973abd096)


🛠️Hardware Connections:

![dwd](https://github.com/user-attachments/assets/98b9dec7-5950-465e-832b-578e881f6d57)


💻Live serial monitor outputs:

![Screenshot 2025-06-19 000316](https://github.com/user-attachments/assets/aee61c19-d440-4d18-a6a4-199fda040c2a)


📍Blynk integration:

![Screenshot 2025-06-19 000710](https://github.com/user-attachments/assets/855962cd-3ecc-470e-9eac-aba9ea0fd047)


## 💼 Project Applications

   Bicycle / scooter theft protection

   Fleet vehicle tracking

   IoT-based logistics monitoring

   Parental control or school transport visibility

##  Future Scope

  Add geofencing with alerts

  Route history & playback

   Speed limit tracking

   SMS/email notification integration

🙌 Let's Connect

  Email: dasit.tanisha@gmail.com
  Linkedin: www.linkedin.com/in/tanishajdas
