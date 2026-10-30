# 🚗 ParkiQ – Smart Parking Management System

**ParkiQ** is an IoT-based Smart Parking Management System that monitors parking slot availability using ESP32 and ultrasonic sensors. It displays parking information through an interactive web-based map powered by Firebase Realtime Database.

## 🎯 Problem Statement

Finding available parking spaces in crowded areas wastes time and increases unnecessary traffic. ParkiQ aims to simplify this process by providing real-time parking availability information through a digital platform.

## 🏗️ System Architecture

```text
6 Ultrasonic Sensors
        |
        v
      ESP32
        |
        v
Firebase Realtime Database
        |
        v
   Web Dashboard
        |
        v
 Interactive Parking Map
```

## ✨ Features

- Real-time parking slot monitoring.
- ESP32 hardware integration.
- Six ultrasonic sensors for vehicle detection.
- Firebase Realtime Database integration.
- Interactive map with Leaflet.js.
- OpenStreetMap integration.
- Parking availability status (Available, Almost Full, Full).
- Current location detection.
- Distance calculation.
- Google Maps navigation.

## 🛠️ Tech Stack

| Technology | Purpose |
|---|---|
| ESP32 | IoT Controller |
| Ultrasonic Sensors | Vehicle Detection |
| HTML | Web Structure |
| CSS | UI Design |
| JavaScript | Application Logic |
| Firebase RTDB | Real-time Database |
| Leaflet.js | Interactive Maps |
| OpenStreetMap | Map Data |

## 📂 Project Structure

```text
ParkiQ/
│
├── esp32wifiscan/
│   └── esp32wifiscan.ino
│
├── index.html
├── firebase.json
├── .firebaserc
├── data.json
├── new.json
├── .gitignore
└── README.md
```

## ⚙️ How It Works

1. Ultrasonic sensors detect vehicle presence in parking slots.
2. ESP32 processes sensor readings.
3. Parking data is sent to Firebase Realtime Database.
4. The web dashboard retrieves updated parking information.
5. Users view parking availability on an interactive map.
6. Users can check distance and navigate to parking locations.

## 🚀 Installation & Setup

### Requirements

- ESP32 Development Board
- 6 Ultrasonic Sensors
- Arduino IDE
- Firebase Realtime Database
- VS Code

### Steps

1. Clone the repository:

```bash
git clone https://github.com/adityavishwakarma707013-cpu/parkIQ.git
```

2. Open the project in VS Code.
3. Configure Firebase Realtime Database.
4. Open `esp32wifiscan/esp32wifiscan.ino` in Arduino IDE.
5. Configure Wi-Fi credentials and required libraries.
6. Upload the firmware to ESP32.
7. Run `index.html` using a local development server.

## 🔮 Future Improvements

- User authentication.
- Parking reservation system.
- Admin dashboard.
- Parking analytics and reports.
- Multi-location parking management.

## 👨‍💻 Developer

**Aditya Vishwakarma**

B.Tech – Computer Science and Engineering

GitHub: [@adityavishwakarma707013-cpu](https://github.com/adityavishwakarma707013-cpu)

Project: [ParkiQ Repository](https://github.com/adityavishwakarma707013-cpu/parkIQ)

---

⭐ If you like this project, consider giving it a star!