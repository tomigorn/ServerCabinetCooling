#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello from ESP32!");
}

void loop() {
  Serial.println("ESP32 is running...");
  delay(1000); // wait 1 second
}
