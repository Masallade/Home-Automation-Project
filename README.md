Home Automation Using Arduino and Flutter
Author: Muhammad Dawood Ahmed
A complete home automation system that allows users to control household appliances remotely via a Flutter mobile application communicating over Bluetooth serial with an Arduino UNO.

Project Overview
This project bridges embedded hardware and mobile software to deliver a practical smart home solution. The Arduino firmware handles all hardware I/O and serial communication, while the Flutter app provides the user-facing interface with voice control, manual switches, and live device status.

Note: The Flutter mobile application source code is confidential and not included in this repository. Only the Arduino firmware is open-source.


Arduino Firmware
How It Works

Serial.begin(9600) establishes UART communication between the Arduino and the paired Bluetooth device at a baud rate of 9600. Both devices must use the same baud rate.
pinMode() configures GPIO pins 2, 3, 12, and 13 as outputs to drive the relay channels.
void loop() runs indefinitely, continuously polling for incoming serial data.
Serial.available() checks the serial buffer (64-byte capacity) for incoming bytes.
Serial.read() reads the first available byte from the buffer.
Conditional logic (if/else) maps received commands to specific relay actions.


Circuit Components
ComponentDetailsMicrocontrollerArduino UNOBluetooth ModuleHC-05 (H005)Transistors2N2222 (relay drivers)Diodes1N4007 (flyback protection)Relays5V relay modulesLoadsLamp, DC Motor, AlternatorPassive ComponentsResistors

Setup Instructions
Proteus Simulation

Open the project in Proteus.
On your PC, enable Bluetooth and open More Bluetooth Options → COM Ports.
If no COM port is assigned, click Add to create one.
In Proteus, select the HC-05 module → Physical Port → choose the COM port from step 3.
Run the simulation.

Mobile App

Download any Arduino Voice Controller app from the Play Store.
Enable Bluetooth on your phone and connect to the HC-05 module.
The module will only respond while Proteus is in active simulation mode.
