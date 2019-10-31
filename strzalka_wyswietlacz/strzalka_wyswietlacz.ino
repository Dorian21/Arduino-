
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);

lcd.begin(16,2);

lcd.backlight();
lcd.setCursor(0,0);
lcd.print("Kocham cie Paula");
delay(500);
lcd.setCursor(0,1);
lcd.print("Jestes moja! <3");

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(13,HIGH);
  delay(500);
digitalWrite(13,LOW);

digitalWrite(12,HIGH);
  delay(500);
digitalWrite(12,LOW);

digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
  delay(500);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);

digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
  delay(500);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);

digitalWrite(5, HIGH);
  delay(500);
digitalWrite(5, LOW);

delay(200);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);

delay(500);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);

delay(50);

lcd.backlight();
delay(500);
lcd.noBacklight();
delay(500);

}
