#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int temp=36;
int sensor;
int S1;

void setup()
{
  
  lcd.begin(16,2);
  pinMode(temp,INPUT);
  Serial.begin(9600);
 
 }

 void loop()
 {
   sensor = analogRead(temp);
   Serial.println(sensor);

   lcd.setCursor(0,0);
   lcd.print("T:");
   lcd.print(S1);
   lcd.print("      ");
   
  if(sensor<2300)
  {
    S1=25;
  }
  else 
  {
    S1=random(26,43);
  }
   delay(1000);
 }

 