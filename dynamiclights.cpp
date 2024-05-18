#include <ESP8266WiFi.h>

// Define the number of LEDs
#define NUM_LEDS 5

// Define the pins for the LEDs
int ledPins[NUM_LEDS] = {16, 5, 4, 0, 2};  // D0, D1, D2, D3, D4

// Define the delay between each LED turning on/off
int delayTime = 100; // in milliseconds

void setup() {
  // Set the LED pins as outputs
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Left turn signal
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  delay(delayTime * 2);

  // Right turn signal
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  delay(delayTime * 2);
}
