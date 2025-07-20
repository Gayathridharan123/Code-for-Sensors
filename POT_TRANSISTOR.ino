
#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int P=36;
const int relayPin=13;
int sensor;

void setup()
{
  lcd.begin(16,2);
  pinMode(P,INPUT);
  pinMode(relayPin,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  sensor=analogRead(P)/40.95;
  Serial.println(sensor);

  lcd.setCursor(0,0);
  lcd.print("P:");
  lcd.print(sensor);
  lcd.print("      ");
 
if((sensor>=0)&&(sensor<20))
{
  analogWrite(relayPin,25);
}

else if((sensor>=20)&&(sensor<40))
{
  analogWrite(relayPin,50);
}

else if((sensor>=40)&&(sensor<60))
{
 analogWrite(relayPin,100);
}

else if((sensor>=60)&&(sensor<80))
{
 analogWrite(relayPin,200);
}

else 
{
  analogWrite(relayPin,250);
}

delay(1000);
}