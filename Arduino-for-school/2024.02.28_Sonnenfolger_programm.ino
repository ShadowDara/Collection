#include <Stepper.h>
int SPU = 2048;

Stepper Motor(SPU, 3,5,4,6);

int a=9; //Variable für Bewegung
int b;
int c; //Varibale für schnellen und langsame Drehungen
int e=5; //Maximale Geswindichkeit des Schritmotors (Umdrehungen pro Minute)
int f; // Motormultiplikator
int m; //Variable für den Schrittmotor.
int messwertx;
int messwerty;
int n=0; //Variable für LOOP
int sensorx=A0;
int sensory=A1;
int j; //multipliezierter Motorwert
int x; //Variable für MapFunktion 1
int y; //Variable für MapFunktion 2

void setup() {
  Motor.step(0);

  m=0; //Setze die Variable für den Schrittmotor auf den gleichen Wert des Schrittmotors.

  Serial.begin(9600);

  Motor.setSpeed(e);
}

void loop() {

  for (n<240; n=n+1;) {
    messwertx=analogRead(sensorx);
    messwerty=analogRead(sensory);

    x=map(messwertx, 1, 1023, 2048, 0);
    y=map(messwerty, 1, 1023, 2048, 0);
  
    //Auswerten der beiden Sensoren

    if (x == y) {// x genauso groß wie y
      m=0;
    }
    if (x > y) {// x größer als y
      c=y-x;
      m=c;
    }
    if (x < y) {// x kleiner als y
      c=y-x;
      m=c;
    }

    Serial.println(c);

    //Vergleichen der beiden Sensoren

    if (m > 2048) {// Überprüfe ob m größer als 200 ist, wenn ja rechne m - 200, damit der Motor nicht das Kabel aufwickelt.
      Motor.step(-2048);
    }
    if (m < 0) {// Überprüfe ob m größer als 200 ist, wenn ja rechne m + 200, damit der Servo nicht das Kabel aufwickelt.
      Motor.step(2048);
    }
    //Damit der Schrittmotor nicht überdreht.

    //Verschiedene Geswindichkeiten für den Schrittmotor
    if(c>30) {
      f=3;
    }
    else {
      f=1;
    }

    j=m*f;
    //Motor.step(j);
    
    Serial.print("x: ");
    Serial.println(x);
    Serial.print("y: ");
    Serial.println(y);
    Serial.print("m: ");
    Serial.println(m);
    Serial.print("n: ");
    Serial.println(n);
    Serial.print("j: ");
    Serial.println(j);
    delay(1000);
  }
  b=m*(-1);
  Motor.step(b);
}
