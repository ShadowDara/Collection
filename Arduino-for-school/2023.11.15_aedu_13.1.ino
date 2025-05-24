void setup() {
  Serial.begin(9600);
  }
void loop() {
  for(int x=10; x<100; x=x+1) {
    Serial.println(x);
    x=x+2;
    }
  }
