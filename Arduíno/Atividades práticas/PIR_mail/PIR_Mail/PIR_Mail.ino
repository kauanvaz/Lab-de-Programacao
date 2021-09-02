#define PIR_SENSOR 3
#define LED 8
void setup() {
  pinMode(PIR_SENSOR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(PIR_SENSOR) == HIGH){
    digitalWrite(LED, HIGH);
    Serial.println("S");
  }else{
    digitalWrite(LED, LOW);
    Serial.println("N");
   }
  delay(200);
}
