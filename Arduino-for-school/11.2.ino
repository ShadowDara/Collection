int i;
void setup() {
  pinMode(4,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop(){
  i=digitalRead(4);
  if(i==0){
    digitalWrite(9,HIGH);
    } else {
      digitalWrite(9,LOW);
    }
}
