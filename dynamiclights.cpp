#include <ESP8266WiFi.h>

// Define the number of LEDs
#define NUM_LEDS 5

// Define the pins for the LEDs
int ledPins[NUM_LEDS] = {16, 5, 4, 0, 2};  // D0, D1, D2, D3, D4

// Define the delay between each LED turning on/off
int delayTime = 175; // in milliseconds

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(115200);
  
  // Set the LED pins as outputs
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Ensure all LEDs are off initially
    Serial.print("LED Pin ");
    Serial.print(ledPins[i]);
    Serial.println(" set as OUTPUT and turned OFF");
  }
}

void loop() {
  // Left turn signal
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i], HIGH);
    Serial.print("LED ");
    Serial.print(ledPins[i]);
    Serial.println(" ON");
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
    Serial.print("LED ");
    Serial.print(ledPins[i]);
    Serial.println(" OFF");
  }
  delay(delayTime * 2);

  // Right turn signal
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    Serial.print("LED ");
    Serial.print(ledPins[i]);
    Serial.println(" ON");
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
    Serial.print("LED ");
    Serial.print(ledPins[i]);
    Serial.println(" OFF");
  }
  delay(delayTime * 2);
}

