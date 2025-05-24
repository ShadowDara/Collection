  #include <Stepper.h>
int SPU = 2048;
Stepper Motor(SPU, 3,5,4,6);

int c; //Steps
int e=1; //Motor Speed
int messwertx;
int messwerty;
int n=0; //Variable für LOOP
int sensorx=A0; 
int sensory=A1;
int r; //Reset
int x; //Variable für MapFunktion 1
int y; //Variable für MapFunktion 2

void setup() {
  Serial.begin(9600);

  Motor.setSpeed(e);
}

void loop() {

  //for (n<240; n=n+1;) {
    messwertx=analogRead(sensorx);
    messwerty=analogRead(sensory);
    //x=map(messwertx, 1, 1023, 2048, 0);
    //y=map(messwerty, 1, 1023, 2048, 0);
    //Auswerten der beiden Sensoren
    x=messwertx;
    y=messwerty;
    
    x=x+2;
    
    if (x == y) {// x genauso groß wie y
      c=0;
    }
    if (x > y) {// x größer als y
      c=y-x;
    }
    if (x < y) {// x kleiner als y
      c=y-x;
    }
    //Umrechung der Sensoren
    
    Serial.print("x: ");
    Serial.println(x);
    Serial.print("y: ");
    Serial.println(y);
    Serial.print("c (Motorsteps): ");
    Serial.println(c);
    //Werte anzeigen auf seriellem Monitor
    delay(100);

    r=r+c;
    if (r > 2048) {// Überprüfe ob m größer als 2048 ist, wenn ja rechne m - 2048, damit der Motor nicht das Kabel aufwickelt.
      Motor.step(2048);
    }
    if (r < -2048) {// Überprüfe ob m größer als 2048 ist, wenn ja rechne m + 2048, damit der Motor nicht das Kabel aufwickelt.
      Motor.step(-2048);
    }
    c=c*(-1);
    Motor.step(c); //Motor stepping
 // }
}
