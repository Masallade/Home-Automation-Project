Home Automation 
Using Arduino and C Language 

By Muhammad Dawood Ahmed

This project is very easy to understand and develop

code

First we globally declare a variable voice of String data type.

The void setup() is the first function to be executed in the sketch and it is executed only once.

Serial.begin(9600) establish serial communication

Between your Arduino board and another     device(computer or phone or any otherdevice).In this case my phone.
And 9600 is baud rate which is the rate value in which the two device communicate at serial.
note:the baud rate of serial.begin() must be same with the baud rate of that devices you want to communicate.

We declare 4 pins 2,3,12,13 that will used as output by using pinmode function().

The void loop() is a function that executes indefinitely until you power off the Arduino.

The Serial.available( ) function gets the stored bytes from the serial port that are available for reading. It is the data, which is already stored in the serial buffer. The serial buffer in Arduino holds the 64 bytes.

Serial.read is a function of the Ard Serial Library  read out the first available byte from the serial receive buffer.

And the rest is  if else condition

Circuit:

The circuit consists the following objects,
Arduino UNO
H005 Module(Bluetooth Module)
Resistors
2n2222 Transistors
Relays
1N4007 diode
Lamp
DC Motor
Alternator

After creating the Circuit open Laptop/PC Bluetooth then click more bluetooth options then click COM Port If COM Port is showing and is not assign to anyone just close otherwise click on add. means(If noting is showing then also click on add), after that go to proteus and click on H005 Module you will see physical port section and choose that one that are showing in Com port from more Bluetooth Options.Then simulate the proteus

Now you can download any Arduino Voice Controller app from play store just open bluetooth and connect 
note it will connect only when proteus is in simulate mode otherwise it connect but will note work.
