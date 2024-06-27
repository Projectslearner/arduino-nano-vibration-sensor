/*
    Project name : Vibration Sensor
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-vibration-sensor
*/

const int vibrationPin = 2;   // Vibration sensor pin connected to digital pin 2

void setup() 
{
  Serial.begin(9600);         // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set vibration sensor pin as INPUT
}

void loop() 
{

  int vibrationState = digitalRead(vibrationPin); // Read vibration sensor state

  // Check if vibration is detected
  if (vibrationState == HIGH) 
  {
    Serial.println("Vibration detected!");
    delay(500);  // Keep the LED on for 500 milliseconds
  }

  delay(100); // Add a small delay to debounce the sensor
}

\