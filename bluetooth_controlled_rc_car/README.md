# 🚗 Bluetooth Controlled Car

A simple Arduino-based Bluetooth Controlled Car** that can be wirelessly controlled using a smartphone. The car receives movement commands through a Bluetooth module and controls its motors accordingly.

## ✨ Features

* 📱 Wireless control through Bluetooth
* ⬆️ Forward movement
* ⬇️ Backward movement
* ⬅️ Left turn
* ➡️ Right turn
* ⏹️ Stop
* ⚡ Real-time motor control

## 🛠️ Components Used

* Arduino Uno R3
* HC-05 Bluetooth Module
* L298N Motor Driver
* 4 × DC Motors
* Robot Car Chassis
* Wheels
* Battery Pack
* Jumper Wires

## 🎮 Bluetooth Commands

The car responds to commands sent from a Bluetooth terminal/controller app.

| Command | Action        |
| ------- | ------------- |
| `F`     | Move Forward  |
| `B`     | Move Backward |
| `L`     | Turn Left     |
| `R`     | Turn Right    |
| `S`     | Stop          |

## ⚙️ How It Works

1. The smartphone sends a movement command through Bluetooth.
2. The **HC-05 Bluetooth module** receives the command.
3. Arduino reads the incoming character.
4. Arduino determines the required movement.
5. The L298N motor driver** controls the direction and speed of the motors.
6. The car moves according to the selected command.

## 📂 Project Structure

```text
Bluetooth-Car/
│
├── Bluetooth-Car.ino
└── README.md
```

## 🚀 Getting Started

### 1. Assemble the Hardware

Connect the Arduino, Bluetooth module, motor driver, motors, and power supply according to the wiring configuration above.

### 2. Upload the Code

Open `Bluetooth-Car.ino` in the Arduino IDE and upload it to the Arduino Uno.

### 3. Connect Bluetooth

* Power on the car.
* Enable Bluetooth on your smartphone.
* Pair with the HC-05 module.
* Open a Bluetooth controller or terminal application.
* Connect to the HC-05.

### 4. Control the Car

Send the appropriate commands to control the car:

```text
F → Forward
B → Backward
L → Left
R → Right
S → Stop
```

## 💻 Technologies

* **Arduino**
* **C/C++**
* **Bluetooth Communication**
* **Motor Control**

## 🎯 Learning Outcomes

Through this project, I practiced:

* Arduino programming
* Serial/Bluetooth communication
* DC motor control
* Motor driver interfacing
* Hardware wiring and troubleshooting
* Integrating hardware and software

## 🔮 Future Improvements

Possible improvements include:

* 📡 Bluetooth-controlled speed adjustment
* 🚧 Obstacle detection
* 🤖 Autonomous driving mode
* 📱 Custom mobile controller
* 💡 LED indicators
* 🔊 Buzzer/horn control
* 📊 Sensor integration



**Built with Arduino 🤖 | Learning by Building**
