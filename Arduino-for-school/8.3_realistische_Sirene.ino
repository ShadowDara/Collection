void setup() {
}
void loop() {
  for(int f=250; f<500; f=f+3){
    tone(11,f);
    delay(60);
    }
  for(int f=500; f>250; f=f-3){
    tone(11,f);
    delay(60);
  }
}
