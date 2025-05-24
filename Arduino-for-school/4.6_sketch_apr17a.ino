void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13,HIGH);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);  
  
}
