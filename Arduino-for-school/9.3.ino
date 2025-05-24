int d;
void setup() {
  pinMode(3,OUTPUT);
  d=1000;
}

void loop() {
  for(int n=1; n<254; n=n+10) {
    analogWrite(3,n);
    delay(d);
    Serial.begin(9600);
    Serial.println(n);
    }
}
