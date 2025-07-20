#include <LiquidCrystal.h>
const int rs =13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int IR = 7;
int sensor;


void setup()
{
  lcd.begin(16,2);
  pinMode(IR,INPUT);
}


void loop()
{
 sensor = digitalRead(IR);

  lcd.setCursor(0,0);
  lcd.print("IR:");
  lcd.print(sensor);
  lcd.print("   ");

  delay(1000);
}