#include "Arduino.h"

void setup() {
  Serial.begin(115200);
  Serial.println();

  pinMode(2, OUTPUT);
}

void loop() {
   Serial.print("H");
   digitalWrite(2, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(500); // wait for a second
   Serial.print("L");
   digitalWrite(2, LOW); // turn the LED off by making the voltage LOW
   delay(500); // wait for a second
}