#include <DHT.h>
#include <DHT_U.h>

int pled1 = 5;
int ldr = A2;
int bot = 8;
int bot2 = 9;
int pled2 = 6;
int pot = A0;
int pled3 = 7;
int buzz = 3;
int pled4 = 4; 

void setup() {
  pinMode(bot2, INPUT_PULLUP);
  pinMode(buzz, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(pled1, OUTPUT);
  pinMode(pled2, OUTPUT);  
  pinMode(bot ,INPUT);
  Serial.begin(9600);
  //dht.begin();
}

void loop() {
 //Teste ldr, botao e potenciometro 
 int lum;
 int a;
 int p;
 int b;

 int flag=0;
 lum = analogRead(ldr);
 Serial.println(lum);
 if(lum < 600){
  digitalWrite(pled1, HIGH);
  tone(buzz, 500);
 }else{
  digitalWrite(pled1, LOW);
 }
 a = digitalRead(bot);
 b = digitalRead(bot2);
 if(a==HIGH){
  noTone(buzz);
  //digitalWrite(pled4, LOW);
 }else{
  if(flag == 0){
  flag = 1;
  } else{
    flag = 0;
  }
  //digitalWrite(pled4, HIGH);
  //tone(buzz, 256);
 }

if(flag == 1){
  digitalWrite(pled4, HIGH);
} else {
  digitalWrite(pled4, LOW);
}

 if(b==HIGH){
  digitalWrite(pled2, LOW);
  
 }else{
  digitalWrite(pled2, HIGH);
  tone(buzz, 123);
 }

 p = map(analogRead(pot), 0, 1023, 0, 255);
 analogWrite(pled3, p);

 //m();
}
void m(){
  tone(buzz, 330);
  delay(400);
  tone(buzz, 330);
  delay(400);
  tone(buzz, 349);
  delay(400);
  tone(buzz, 370);
  delay(800);
  tone(buzz, 440);
  delay(400);
  tone(buzz, 370);
  delay(400);
  tone(buzz, 440);
  delay(400);
  tone(buzz, 370);
  delay(400);

  tone(buzz, 370);
  delay(400);
  tone(buzz, 349);
  delay(400);

  tone(buzz, 330);
  delay(400);
  tone(buzz, 494);
  delay(400);
   tone(buzz, 330);
  delay(400);
   tone(buzz, 330);
  delay(800);
  tone(buzz, 494);
  delay(400);
  noTone(buzz);
  delay(100);
  
}
