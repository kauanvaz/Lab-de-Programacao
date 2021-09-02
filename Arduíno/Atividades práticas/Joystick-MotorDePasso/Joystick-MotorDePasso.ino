#include <Stepper.h>
const int stepsPerRevolution = 64;
 
Stepper MotorDePasso(stepsPerRevolution, 8, 9, 10, 11);

int x, y; // Eixos x e y do joystick
int velocidade = 100;
int passos = 0;
int z = 2; // botão do joystick

void setup(){
  MotorDePasso.setSpeed(velocidade); 
  pinMode(z, INPUT_PULLUP) ;
}

void loop(){
  x = analogRead(A0);   
  y = analogRead(A1); 

  // Controla o sentido da rotação: horário ou anti-horário
  if (x > 800){
     passos = 10;
  }
  else if (x < 300){
     passos = -10;
  }

  // Manipula a velocidade de rotação do motor
  if (y > 800){
      if (velocidade > 10){
        velocidade = velocidade - 30;
        MotorDePasso.setSpeed(velocidade);
      }
  }
  else if (y < 300){
    if (velocidade < 480){
        velocidade = velocidade + 30;
        MotorDePasso.setSpeed(velocidade);
      }
  }
   MotorDePasso.step(passos);

  if(digitalRead(z) == LOW){
    MotorDePasso.setSpeed(300);
    MotorDePasso.step(1024);
    delay(500);
    MotorDePasso.step(-1024);
    delay(500);
    MotorDePasso.step(-512);
    delay(500);
    MotorDePasso.step(1024);
    delay(500);
    MotorDePasso.setSpeed(100);
    MotorDePasso.step(512);
    delay(500);
    MotorDePasso.setSpeed(480);
    MotorDePasso.step(-2048);
    delay(500);
    MotorDePasso.step(0);
    passos = 0;
  }
}
