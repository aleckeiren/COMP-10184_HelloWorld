/**
  I, Alec Pasion, 000811377 certify that this material is my original work. No other person's work has been used
  without due acknowledgement.
**/

#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  String espChipId = String(ESP.getChipId());
  String flashChipId = String(ESP.getFlashChipId());
  Serial.println("\n\nHello, World!\nStudent Name: Alec Pasion\nStudent ID: 000811377\nESP8266 chip ID: " + espChipId + "\nFlash Chip ID: " + flashChipId);
}

void loop() {
  delay(2000);
  String timeLive = String(millis());
  Serial.println("Amount of time live: " + timeLive +"ms");
}