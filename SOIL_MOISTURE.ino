#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int SM=36;
const int relayPin=2;
int sensor;


void setup()
{
  lcd.begin(16,2);
  pinMode(SM,INPUT);
  pinMode(relayPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor=(4095-analogRead(SM))/40.95;
  Serial.println(sensor);

  lcd.setCursor(0,0);
  lcd.print("SM:");
  lcd.print(sensor);
  lcd.print("        ");
  

  if(sensor<50)
  {
   digitalWrite(relayPin,1);
  }

  else
  {
    digitalWrite(relayPin,0);
  }
  delay(1000);
}