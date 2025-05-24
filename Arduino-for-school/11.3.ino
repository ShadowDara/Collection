int i, d, h;
void setup() {
  pinMode(2,INPUT_PULLUP); 
  pinMode(4,INPUT_PULLUP);
  d=500;
}
void loop() {
  i=digitalRead(4);
  h=digitalRead(2);
  if(i==0) {
    tone(11,80);
    delay(d);
  }
  if(h==0) {
    tone(11,200);
    delay(d);
  }
  if(i==1) {
    noTone(11);
    delay(d);
  } 
}
