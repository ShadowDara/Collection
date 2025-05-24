float Batteriefuellstand;
void setup() {
pinMode (13,OUTPUT);
pinMode (12,OUTPUT);
pinMode(11, OUTPUT);

  Serial.begin (9600);

}

void loop() 
{
  Batteriefuellstand = analogRead(A0);
  Serial.println(Batteriefuellstand);
  if (Batteriefuellstand >= 290)
  { digitalWrite(11, HIGH);
    Serial.println("Grün");
  }

  if (Batteriefuellstand < 245)
  { digitalWrite(13, HIGH);
  Serial.println("rot");
  }else
{
    digitalWrite(12, HIGH);
    Serial.println("gelb");
}
delay(200);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
digitalWrite(11, LOW);
}
