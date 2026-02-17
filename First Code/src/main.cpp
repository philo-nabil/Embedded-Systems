#include <Arduino.h>
void setup() {
  // Use 9600 baud - the 11.0592 crystal makes this 100% accurate
  Serial.begin(9600); 
  pinMode(PIN_PB0, OUTPUT); // Connect an LED to Pin 1 (PB0)
}

void loop() {
  digitalWrite(PIN_PB0, HIGH);
  delay(1000); // If this is exactly 1 second, your crystal is working!
  digitalWrite(PIN_PB0, LOW);
  delay(1000);
  
  Serial.println("Hello from ATmega32A!");
}