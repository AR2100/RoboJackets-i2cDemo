#include "mbed.h"

PinName sdaPin(p9);
PinName sclPin(p10);

I2C i2c(sdaPin , sclPin);  
                        
const int addr8bit = 0x04 << 1;    

void writeData(int addr7Bit, char *cmd, int length);                        

int main() {

    char cmd[2];

    while (1) {
        /*
        cmd[0] = 'h';
        cmd[1] = 'i';
        
        i2c.write(addr8bit, cmd, 2);

        wait(0.5);
        */
        
        cmd[0] = 'h';
        cmd[1] = 'i';
        
        writeData(0x04, cmd, 2);
    }
}

void writeData(int addr7Bit, char *cmd, int length) {
    int addr8bit = addr7Bit << 1;
    i2c.write(addr8bit, cmd, length);
    //std::thisthread::sleep_for(500);
    //wait(0.5);
}