#include "DHT.h"

#define DHTPIN 12 
#define DHTTYPE DHT11 
 
DHT dht(DHTPIN, DHTTYPE);
 
void setup() 
{
  Serial.begin(9600);
  Serial.println("lendo as temp e umidade!");
  dht.begin();
}
 
void loop() 
{
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(t) || isnan(h)) 
  {
    Serial.println("Failed to read from DHT");
  } 
  else
  {
    //Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print("\t");
    //Serial.print("Temperatura: ");
    Serial.print(t);
   Serial.print(" \n");
   // Serial.println(" *C");
    delay(500);
  }
}
