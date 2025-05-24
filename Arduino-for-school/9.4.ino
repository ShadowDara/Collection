int s;
void setup() {
  pinMode(3,OUTPUT);
  randomSeed(analogRead(A1));
}

void loop() {
  s=random(90,250);
  analogWrite(3,s);
  delay(100);
  }
