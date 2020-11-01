# RoboJackets i2cDemo

This is a demo project for the LidarLite project. In this project, the master mbed LPC1768 communicates with the slave Arduino Uno using the I2C communication protocol. 

## Installation

First, navigate to your source folder. Then, clone the project:
```bash
git init
git clone https://github.com/AR2100/RoboJackets-i2cDemo.git
```

Now, flash the mbed and the Arduino.

**Flashing the mbed**
1. Go to the mbed online compiler [here](https://ide.mbed.com/compiler/#nav:/;). Login with your mbed account or create one.
2. On the workspace homescreen, click on "New" in the top left-hand corner. In the "Create new program" window, select the mbed LPC1768 in the "Platform" dropdown. Name the project and then click OK.
3. Now, inside your new project, you will see a main.cpp file and a mbed library file. Click on the main.cpp file.
4. Inside the main.cpp file, paste the code from `src/mbed/main.cpp`.
5. In the toolbar above the code, click on "Compile". The code should compile and then download as a bin file. 
6. Plug in the mbed LPC1768 to your computer using a USB-B cord. In your file explorer, find the "MBED" device. Click on it.
7. Inside the mbed device in your file explorer, delete existing bin files. Then, copy and paste the bin file from your Downloads folder into the "MBED" device. A light should flash rapidly on the mbed LPC1768 as the file is downloading to the mbed.
8. Disconnect the mbed from your computer.

**Flashing the Arduino**
1. Download the Arduino IDE [here](https://www.arduino.cc/en/software).
2. In the Arduino IDE, go to File > Open and find `src/arduino/slavei2c.ino`.
3. Plug the Arduino Uno into your computer using a USB-A cable.
4. Under Tools > Board, select "Arduino/Geuino Uno".
5. Under Tools > Port, find the USB port the Arduino is plugged into. If you are on Linux, run this command in the terminal:
```bash
sudo chmod a+rw /dev/ttyACM0
```

This gives you read/write access to the port the Arduino is plugged into.

6. Compile the sketch by clicking the checkmark button in the top left-hand corner.
7. Upload the sketch by clicking the upload button in the top left-hand corner.
8. Keep the Arduino plugged into your computer so you can access the terminal.

## Testing

Build the circuit on a breadboard. The circuit diagram is in (circuit diagram to be added later). It is OK to use the 5V and 3.3V terminals on the Arduino to power the mbed, but you can use an external power source as well. Just be sure to connect the grounds of the Arduino and the external power supply. Personally, I use a cell phone power adapter that plugs into the wall and a USB cable that I've stripped and use the red and black wires for power. 

Open up the terminal in the Arduino IDE by clicking on the square magnifying glass button in the top right-hand corner. Then, provide power to the circuit. 

In the Arduino terminal, you should repeatedly see the message:
`hi : data received!`
