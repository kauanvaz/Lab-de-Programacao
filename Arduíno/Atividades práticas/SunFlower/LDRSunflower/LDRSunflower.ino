#define LDR_SENSOR A0
#define SERVO_PIN D5
#define TOLERANCE 150
#define GREEN_LED D6
#define RED_LED D1
#include <Servo.h>

Servo servo;
int pos = 90;

void setup() {
  pinMode(LDR_SENSOR, INPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  servo.attach( SERVO_PIN );
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(LDR_SENSOR));
  if (analogRead(LDR_SENSOR) < (512-TOLERANCE) && analogRead(LDR_SENSOR) > 40)
  {
    if (pos < 180){ 
        turnOnLed(LOW, HIGH); //Liga o vermelho do led RGB enquanto desliga o verde
        pos++;
    }
  }

  if (analogRead(LDR_SENSOR) > (800+TOLERANCE))
  {
    if (pos > 10){
        turnOnLed(HIGH, LOW); // Liga verde/Desliga vermelho
        pos--;
    }
  }
  servo.write(pos); 
  delay(100);
}

void turnOnLed(int greenLed, int redLed){
   digitalWrite(RED_LED, redLed);
   digitalWrite(GREEN_LED, greenLed);  
}
