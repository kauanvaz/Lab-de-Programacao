/*
Exemplo demonstracaoo usado no v�deo para este exemplo usei os pinos digitais PWM com o led RGB 5 (vermelho) / 6 (verde)
/ 9 (azul)
E o pino digital 12 para receptor infrared 
 
 */

#include <IRremote.h>

int RECV_PIN =2;

IRrecv irrecv(RECV_PIN);

decode_results results;

//leds
int ledRed = 4;
int ledGreen = 5;
int ledBlue = 6;
int ledYellow = 7;

float intensidadeRed =0;
float intensidadeGreen =0;
float intensidadeBlue =0;
float intensidadeYellow =0;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  
  //Seta como saida
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);  
  pinMode(ledYellow, OUTPUT);    
  
  analogWrite(ledRed, intensidadeRed);
  analogWrite(ledGreen, intensidadeGreen);
  analogWrite(ledBlue, intensidadeBlue);
  analogWrite(ledYellow, intensidadeBlue);
}

void loop() {
   
  //Envia os dados de cores para os pinos
  analogWrite(ledRed, intensidadeRed);
  analogWrite(ledGreen, intensidadeGreen);
  analogWrite(ledBlue, intensidadeBlue);
  analogWrite(ledYellow, intensidadeYellow);
  
  if (irrecv.decode(&results)) {
    //Serial.println(results.value, HEX);
    Serial.println(results.value, DEC);
    irrecv.resume(); // Receive the next value

    
    if(results.value ==16738455){
  
    if(digitalRead(ledYellow)==0){
      intensidadeYellow = 255;
      //analogWrite(ledRed, intensidadeRed); 
     
    }else{
      intensidadeYellow = 0;
      //analogWrite(ledRed, intensidadeRed);    
    }  
  }
  
  //Liga e desliga Vermelho 
  // tecla ch+
  if(results.value ==16724175){
  
    if(digitalRead(ledRed)==0){
      intensidadeRed = 255;
      //analogWrite(ledRed, intensidadeRed); 
     
    }else{
      intensidadeRed = 0;
      //analogWrite(ledRed, intensidadeRed);    
    }  
  }

  //Liga e desliga Verde
  // tecla >||
  if(results.value == 16718055){
  
    if(digitalRead(ledGreen)==0){
      intensidadeGreen = 255;       
    }else{
      intensidadeGreen = 0;
    }
  }
  
  
  
    //Liga e desliga Azul
    // tecla EQ
  if(results.value == 16743045){
  
    if(digitalRead(ledBlue)==0){
      intensidadeBlue = 255;         
    }else{
      intensidadeBlue = 0;
    }
  }
  }
}
