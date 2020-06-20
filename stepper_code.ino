#include <Stepper.h>

const int stepRevolution = 200;  

Stepper myStepper(stepRevolution, 2, 3, 4, 5);

int stepCount = 0; 

void setup() {
}

void loop() {
  int sensorReading = analogRead(A0);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 250);
  delay(20);
}