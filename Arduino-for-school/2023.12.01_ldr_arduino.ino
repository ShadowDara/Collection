int sensor=A1;
int messwert;

void setup() {
  Serial.begin(9600);
}

void loop() {
  messwert=analogRead(sensor);
  Serial.println(messwert);
  delay(500);
}
