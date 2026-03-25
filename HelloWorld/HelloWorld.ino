#include "Config.h"
#include "MathFunctions.h"

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(BAUD_RATE);
  Serial.println("Hello, Arduino!");

  int result = sum(5, 7);
  Serial.print("Sum of 5 + 7 = ");
  Serial.println(result);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}