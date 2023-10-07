# cautious-poseidon 🌊

## Introduction
Welcome to the **cautious-poseidon** repository! 🌊 This project is all about measuring water quality with our TDS (Total Dissolved Solids) sensor, providing you with accurate ppm (parts per million) readings.

This project is part of a university project. 🎓

## 🛠️ Hardware Requirements
To get started, you'll need the following hardware:
- [TDS Sensor](https://fs.keyestudio.com/KS0429) (Note: If using a different TDS sensor, the algorithm may need to be adjusted)
- Microcontroller (e.g., Arduino, ESP32, ESP8266)
- Connecting wires
- A water sample 💧
- (Optional) Temperature sensor for improved ppm detection

## 🚀 Installation
1. Connect the TDS sensor to your microcontroller following the provided datasheet
2. Upload the code in this repository to your microcontroller
3. Place the sensor in your water sample

## 💡 Usage
You can read the ppm value in two ways:

1. **Serial Monitor**: Power on your microcontroller, open a serial monitor, and read the TDS values.

2. **Web Interface**: Host a webpage on your microcontroller (instructions included in the code), and access the ppm readings from a web browser.

If you want to enhance accuracy, consider adding a temperature sensor, as ppm values can slightly change with water temperature.

## 🙌 Acknowledgments
- [TDS Sensor Datasheet](https://fs.keyestudio.com/KS0429)
