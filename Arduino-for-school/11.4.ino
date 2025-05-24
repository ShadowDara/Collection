int i, h;
void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
  h=0;
}

void loop() {
  i=digitalRead(4);
  if(i==0) {
    h=h+1;
  }
  Serial.println(h);
  delay(10);
}
