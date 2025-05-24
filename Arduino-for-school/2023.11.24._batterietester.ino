int sensor=A1;
float messwert=0;

void setup() {
  Serial.begin(9600);
  analogWrite(8,OUTPUT);
  }

void loop() {
  if(messwert>1,4) {
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);
    }
  if(messwert>1,2 && messwert<1,4) {
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(500);
    }
  if(messwert<1,2) {
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,HIGH);
    delay(500);
    }
  if(messwert<0,8) {
    analogWrite(8,150);
    delay(500);
    analogWrite(8,LOW);
    delay(500);
    }
    messwert=analogRead(sensor);
    Serial.println(messwert);
    delay(500);
}
