#include <Thermistor.h> //INCLUSÃO DA BIBLIOTECA
 
Thermistor temp(1); 
void setup() {
  Serial.begin(9600);
  delay(1000); 
}
void loop() {
  int temperature = temp.getTemp(); 
  //Serial.print("Temperatura: "); 
  Serial.print(temperature);
  Serial.print("\n"); 
  //Serial.println("*C"); 
  delay(100); 
}
