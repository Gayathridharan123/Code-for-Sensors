#include<LiquidCrystal.h>
const int rs=13,en=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);
const int red=3;
const int yellow=2;
const int green=1;
int i;


void setup()
{
  lcd.begin(16,2);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{

  for(i=0;i<=80;i++)
  {
{
  lcd.setCursor(0,0);
  lcd.print(i);
  lcd.print("       ");
  delay(1000);
}


  if((i>=0) && (i<=30))
  {
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  
  }

else if((i>=30) && (i<=50))
{
 digitalWrite(red,LOW);
 digitalWrite(yellow,HIGH);
 digitalWrite(green,LOW);
}


else if((i>=50) && (i<=80))
{
 digitalWrite(red,LOW);
 digitalWrite(yellow,LOW);
 digitalWrite(green,HIGH);
 
}
  }

delay(1000);
}

