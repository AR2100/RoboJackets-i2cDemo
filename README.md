# RoboJackets i2cDemo

This is a demo project for the LidarLite project. In this project, the master mbed LPC1768 communicates with the slave Arduino Uno using the I2C communication protocol. 

## Installation

First, navigate to you source folder. Then, clone the project:
```bash
git init
git clone https://github.com/AR2100/RoboJackets-i2cDemo.git
```

Now, flash the mbed and the Arduino.

**Flashing the mbed**
1. Go to the mbed online compiler [here](https://ide.mbed.com/compiler/#nav:/;). Log in with your mbed account or create one.


**Flashing the Arduino**
1. Download the Arduino IDE [here](https://www.arduino.cc/en/software).
2. In the Arduino IDE, go to File > Open and find `src/arduino/slavei2c.ino`.
3. Plug the Arduino Uno into your computer using a USB-A cable.
4. Under Tools > Board, select "Arduino/Geuino Uno".
5. Under Tools > Port, find the USB port the Arduino is plugged into. 
    If you are on Linux, run this command in the terminal:
```bash
sudo chmod a+rw /dev/ttyACM0
```

    This gives you read/write access to the port the Arduino is plugged into.
    
6. Compile the sketch by clicking the checkmark button in the top left-hand corner.
7. Upload the sketch by clicking the upload button in the top left-hand corner.
8. Keep the Arduino plugged into your computer so you can access the terminal.
