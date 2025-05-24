int n, d;
void setup() {
  d=100;
}

void loop() {
  for(int n=9; n<12; n=n+1){
    digitalWrite(n,HIGH);
    delay(d);
    digitalWrite(n,LOW);
    }
}
