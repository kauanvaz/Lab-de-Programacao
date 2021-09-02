#include <Arduino.h>
#include <TM1637Display.h>
 
#define CLK 10 
#define DIO 11 
#define TEST_DELAY 2000 
 
TM1637Display display(CLK, DIO);
 
const int pinoBotao1 = 9; 
const int pinoBotao2 = 8;
 
int contador = 0; 
int estadoPress = 0; 
int estadoPress2 = 0;

//      -         A
//    |   |     F   B
//      -         G
//    |   |     E   C
//      -         D

 
uint8_t data[] = {
  SEG_F | SEG_E | SEG_D,
  SEG_A | SEG_E | SEG_F,   
  SEG_A | SEG_B | SEG_C,                       
  SEG_A | SEG_E | SEG_F            
  };

uint8_t pei[] = {
  //SEG_A |SEG_B | SEG_E | SEG_F| SEG_G ,
  0,
  SEG_A ,  
  0, 0 
  //SEG_E |SEG_F,  0                        
 // SEG_A | SEG_D | SEG_E | SEG_F | SEG_G   
};
void setup(){
  pinMode(pinoBotao1,INPUT_PULLUP); 
  pinMode(pinoBotao2,INPUT_PULLUP);
  display.setBrightness(0x0f);
}
 
void loop(){
   display.setSegments(data);
   delay(1000);
   
   display.setSegments(pei);
   delay(1000);
   /*display.showNumberDec(contador,false); 
   if(digitalRead(pinoBotao2)== LOW){ 
      if(estadoPress == 0){ 
          contador++; 
          estadoPress=1; 
      }
   }else{ 
      estadoPress=0; 
    }

    if(digitalRead(pinoBotao1)== LOW){ 
      if(estadoPress2 == 0){ 
          contador--; 
          estadoPress2=1; 
      }
   }else{ //SENÃO, FAZ
      estadoPress2=0; 
    }*/
}
