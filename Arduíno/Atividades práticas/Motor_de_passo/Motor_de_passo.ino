#include <Stepper.h>
const int stepsPerRevolution = 64;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);
int leitura = 0;
int flag = 0;

void setup() {
  myStepper.setSpeed(300); // velocidade do motor
  Serial.begin(9600); 
}

void loop() {
  myStepper.step(2048);
}
