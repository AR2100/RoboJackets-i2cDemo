#include <Wire.h>

void setup() {
  Wire.begin(0x04);                /* join i2c bus with address 8 */
  Wire.onReceive(receiveEvent); /* register request event */
  Serial.begin(9600);
  Serial.println("Start:");
}

void loop() {
  delay(100);
}

void receiveEvent(int howMany)
{
  while(0 < Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
  Serial.println(" : data received!");         
}
