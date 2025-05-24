//Samuel, Jona, Max, Lawan
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C Lcd(0x27,16,2);
int a, b, c, d, e, h, r, x, y;
void setup() {
  analogWrite(3,OUTPUT); //LED 1
  analogWrite(5,OUTPUT); //LED 2
  analogWrite(6,OUTPUT); //LED 3
  analogWrite(9,OUTPUT); //LED 4
  analogWrite(10,OUTPUT); //LED 5
  digitalWrite(11,OUTPUT); //Lautsprecher
  Lcd.init();
  Lcd.begin(16,2);
  Lcd.backlight();
  randomSeed(analogRead(A1));//Zufallsgenerator
  a=15; //Für die Wiederholung des Zweiten Refrains
  b=100; // Delay für Refrain 3
  c=1; //Für den Zufallsgenerator zutsändig
  d=7000; //d ist für das Delay am Anfang
  e=100;
  h=0; //Für den Zufallsgenerator zuständig
  r=0;//Spielt der Refrain mit der r ab
  x=1; //Das Delay für Refrain 0
  y=1000; //Delay am Begin des void loops  
  delay(d);
  Lcd.clear(); //Werte auf dem Display werden gelöscht
  Lcd.setCursor(0,0);
  Lcd.print("Willkommen");
  Lcd.setCursor(0, 1);
  Lcd.print("in der Disco-Box!");
  delay(d);
}
void loop() {
  Lcd.clear(); //Werte auf dem Display werden gelöscht
  Lcd.setCursor(0,0);
  r=random(1,5); //Random Generator der einen zufälligen Refrain auswählt.
  if(r==h) {
    refrain0();
    //Die if-Schleife überprüft ob der Song der zuvor gespielt wieder
    //ausgewählt wurde, wenn das zutrifft, wird kein Song abgespielt
    //und der void loop ist zu Ende. Danach beginnt er erneut.
    //Dafür ist die Variable h zuständig.
  }
  delay(y);
  if(r==1) {
    refrain1();
  }
  if(r==2) {
    refrain2();
  }
  if(r==3) {
    refrain3();
  }
  if(r==4) {
    if(c==0) {
      refrain4();
    }
  }
}
void refrain0() {
  //Wird ausgeführt wenn eine Wiederholung des Zuvoherigen
  //Refrains zustande kommt
  h=0; 
  //Setzt h auf 0 zurück sodas, das der Refrain, der Refrain 0
  //gespielt hat, wieder abgespielt werden kann
  delay(x);
}

// Music is by Github User robsoncouto
// https://github.com/robsoncouto
// https://github.com/robsoncouto/arduino-songs/tree/master

void refrain1() {
  //Tetris Song
  Lcd.print("Tetris");
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  tone(11,659);//E5  
  delay(444);  
  tone(11,494);//B4  
  delay(222);
  tone(11,523);//C5  
  delay(222);  
  tone(11,587);//D5  
  delay(222);  
  tone(11,659);//E5  
  delay(111);
  tone(11,587);//D5  
  delay(111);
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(222);
  tone(11,440);//A4  
  delay(444);  
  tone(11,440);//A4  
  delay(222);  
  tone(11,523);//C5  
  delay(222);
  tone(11,659);//E5  
  delay(444);  
  tone(11,587);//D5  
  delay(222);  
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(444); 
  tone(11,494);//B4  
  delay(111); 
  tone(11,494);//B4  
  delay(111); 
  tone(11,523);//C5  
  delay(222);
  tone(11,587);//D5  
  delay(444);  
  tone(11,659);//E5  
  delay(444);  
  tone(11,52);//C5  
  delay(444);
  tone(11,440);//A4  
  delay(444); 
  tone(11,440);//A4  
  delay(888); 
  tone(11,587);//D5  
  delay(444); 
  tone(11,587);//D5  
  delay(222); 
  tone(11,698);//F5  
  delay(222);  
  tone(11,880);//A5  
  delay(444); 
  tone(11,784);//G5  
  delay(222);  
  tone(11,698);//F5  
  delay(222);
  tone(11,659);//E5  
  delay(444);  
  tone(11,65);//E5  
  delay(222);  
  tone(11,523);//C5  
  delay(222); 
  tone(11,659);//E5  
  delay(444);
  tone(11,587);//D5  
  delay(222);  
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(444); 
  tone(11,494);//B4  
  delay(111); 
  tone(11,494);//B4  
  delay(111); 
  tone(11,523);//C5  
  delay(222);
  tone(11,587);//D5  
  delay(444);  
  tone(11,659);//E5  
  delay(444);  
  tone(11,523);//C5  
  delay(444);
  tone(11,440);//A4  
  delay(444); 
  tone(11,440);//A4  
  delay(888);
  tone(11,659);//E5  
  delay(444);  
  tone(11,494);//B4  
  delay(222);
  tone(11,523);//C5  
  delay(222);  
  tone(11,587);//D5  
  delay(222);  
  tone(11,659);//E5  
  delay(111);
  tone(11,587);//D5  
  delay(111);
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(222);
  tone(11,440);//A4  
  delay(444);  
  tone(11,440);//A4  
  delay(222);  
  tone(11,523);//C5  
  delay(222);
  tone(11,659);//E5  
  delay(444);  
  tone(11,587);//D5  
  delay(222);  
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(444); 
  tone(11,494);//B4  
  delay(222); 
  tone(11,523);//C5  
  delay(222);
  tone(11,587);//D5  
  delay(444);  
  tone(11,659);//E5  
  delay(444);  
  tone(11,523);//C5  
  delay(444);
  tone(11,440);//A4  
  delay(444); 
  tone(11,440);//A4  
  delay(888); 
  tone(11,587);//D5  
  delay(444); 
  tone(11,587);//D5  
  delay(222); 
  tone(11,698);//F5  
  delay(222);  
  tone(11,880);//A5  
  delay(444); 
  tone(11,784);//G5  
  delay(222);  
  tone(11,698);//F5  
  delay(222);
  tone(11,659);//E5  
  delay(444);  
  tone(11,659);//E5  
  delay(222);  
  tone(11,523);//C5  
  delay(222); 
  tone(11,659);//E5  
  delay(444);
  tone(11,587);//D5  
  delay(222);  
  tone(11,523);//C5  
  delay(222);  
  tone(11,494);//B4  
  delay(444); 
  tone(11,494);//B4  
  delay(222);  
  tone(11,523);//C5  
  delay(222);
  tone(11,587);//D5  
  delay(444);  
  tone(11,659);//E5  
  delay(444);  
  tone(11,523);//C5  
  delay(444);
  tone(11,440);//A4  
  delay(444); 
  tone(11,440);//A4  
  delay(888);
  noTone(11); 
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  h=1;
}
void refrain2() {
  Lcd.print("Lightshow");
  for(int z=0; z<a; z=z+1) {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);  
    delay(500); 
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10,LOW);  
    delay(500);
  }
  h=2;
}
void refrain3() {
  Lcd.print("Disco Box");
  for(int z=0; z<a; z=z+1) {
    digitalWrite(3, HIGH);
    delay(b);
    digitalWrite(3,LOW);
    digitalWrite(5, HIGH);
    delay(b);
    digitalWrite(5,LOW);
    digitalWrite(6, HIGH);
    delay(b);
    digitalWrite(6,LOW);
    digitalWrite(9, HIGH);
    delay(b);
    digitalWrite(9,LOW);
    digitalWrite(10, HIGH);
    delay(b);
    digitalWrite(10,LOW);  
  }
  h=3;
}
void refrain4() {
  Lcd.print("Alarm!");
  Lcd.setCursor(0, 1);
  Lcd.print("Bitte verlassen");
  delay(2000);
  for(int f=250; f<500; f=f+3) {
    tone(11,f);
    delay(60);
    }
  for(int f=500; f>250; f=f-3) {
    tone(11,f);
    delay(60);
    noTone(11);
  }
  h=4;
}
