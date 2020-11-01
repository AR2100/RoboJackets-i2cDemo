#include "mbed.h"

//p9 and p10 used for I2C
PinName sdaPin(p9);
PinName sclPin(p10);

I2C i2c(sdaPin , sclPin);    

void writeData(int addr7Bit, char *cmd, int length);                        

/* I2C Master: writes
 *  mbed repeatedly writes a short message to the Arduino
 */
int main() {
    /* When sending data through I2C, use a char array.
     * One char is 1 byte; I2C sends 1 byte at a time.
     */
    char cmd[2];
    cmd[0] = 'h';
    cmd[1] = 'i';

    while (1) {
        //repeatedly writes data to the I2C bus
        writeData(0x04, cmd, 2);
    }
}
/* Sends data to an I2C slave
 * 
 * addr7Bit: the 7 bit I2C address of the slave
 * *cmd: pointer to the char array
 * length: the length of the message
 */
void writeData(int addr7Bit, char *cmd, int length) {
    /* IMPORTANT: mbed uses 8 bit addresses; the Arduino has a 7 bit address.
     * You MUST left shift the 7 bit address by 1; otherwise, the I2C protocol doesn't work!
     */
    int addr8bit = addr7Bit << 1;
    // Use the 8 bit address
    i2c.write(addr8bit, cmd, length);
}