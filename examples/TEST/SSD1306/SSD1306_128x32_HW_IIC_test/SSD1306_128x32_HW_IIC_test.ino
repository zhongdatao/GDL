#include "DFRobot_GDL.h"

DFRobot_SSD1306_128x32_HW_IIC  screen;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  screen.begin();
}

void loop() { 
uint32_t t = millis();
screen.fillScreen(0);
#if defined(ARDUINO_SAM_ZERO)
SerialUSB.println(millis()- t);
#else
Serial.println(millis()- t);
#endif
t = millis();
screen.fillScreen(1);
#if defined(ARDUINO_SAM_ZERO)
SerialUSB.println(millis()- t);
#else
Serial.println(millis()- t);
#endif
}
