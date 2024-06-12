/*
    Project name : Vibration Sensor
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-vibration-sensor
*/

const int vibrationPin = 2;   // Vibration sensor pin connected to digital pin 2
const int ledPin = 13;        // LED pin connected to digital pin 13

void setup() {
  Serial.begin(9600);         // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set vibration sensor pin as INPUT
  pinMode(ledPin, OUTPUT);      // Set LED pin as OUTPUT
}

void loop() {
  int vibrationState = digitalRead(vibrationPin); // Read vibration sensor state

  // Check if vibration is detected
  if (vibrationState == HIGH) {
    Serial.println("Vibration detected!");
    turnOnLED(); // Turn on the LED
    delay(500);  // Keep the LED on for 500 milliseconds
  } else {
    turnOffLED(); // Turn off the LED
  }

  delay(100); // Add a small delay to debounce the sensor
}

void turnOnLED() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
}

void turnOffLED() {
  digitalWrite(ledPin, LOW); // Turn off the LED
}
