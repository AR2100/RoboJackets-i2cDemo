#include <Wire.h>

// This runs once
void setup() {
  /* Join the I2C bus.
   *  Slaves specify an address; masters do not.
   *  In this case, the Arduino's address is 4.
   */
  Wire.begin(0x04);
  // When the Arduino recieves data over the I2C bus, the receiveEvent function is called.     
  Wire.onReceive(receiveEvent); 
  
  //Setup the communication with serial monitor
  Serial.begin(9600);
  Serial.println("Start:");
}

void loop() {
  //wait to recieve data from the mbed
  delay(100);
}

void receiveEvent(int howMany)
{
  while(Wire.available() > 0) 
  {
    /* Read a character from the I2C bus.
     *  Note that we read a single character at a time.
     */
    char c = Wire.read(); 
    Serial.print(c);         
  }
  Serial.println(" : data received!");         
}
