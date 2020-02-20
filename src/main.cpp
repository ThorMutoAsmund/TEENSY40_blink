#include <Arduino.h>

void setup() {
  //pinMode(13, OUTPUT);
    *(&CORE_PIN13_PORTREG+1) |= CORE_PIN13_BITMASK;
    *(&CORE_PIN13_PADCONFIG) = IOMUXC_PAD_DSE(7);
    *(&CORE_PIN13_CONFIG) = 5 | 0x10;

    Serial.begin(9600);
    // while (!Serial) {}
    // Serial.println("Starting!");
 
}

void loop() {
  //digitalWrite(13, 0);
    *(&CORE_PIN13_PORTREG + 0x22) = CORE_PIN13_BITMASK;
    delay(100);
  //digitalWrite(13, 1);
    *(&CORE_PIN13_PORTREG + 0x21) = CORE_PIN13_BITMASK;
    delay(100);
  
}