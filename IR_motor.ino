#include <LiquidCrystal.h>
const int rs =5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int IR = 36;

int relayPin=2;
int sensor;
int count;



void setup()
{
  lcd.begin(16,2);
  pinMode(IR,INPUT);
  pinMode(relayPin,OUTPUT);
}



void loop()

{

  sensor = 1-digitalRead(IR);

  lcd.setCursor(0,0);
  lcd.print("IR:");
  lcd.print(sensor);
  lcd.print("   ");

  if (sensor==1)
  {
    count=count+1;
  }


lcd.setCursor(0,1);
lcd.print("COUNT:");
lcd.print(count);
lcd.print("      ");

if(count>5)

{
lcd.setCursor(6,0);
lcd.print("FILLED");
lcd.print("      ");
digitalWrite(relayPin,1);

}


else
{
lcd.setCursor(6,0);
lcd.print("UNFILLED");
lcd.print("      ");
digitalWrite(relayPin,0);

}


if(count>=10)
{
  count=0;
}



delay(1000);

}
