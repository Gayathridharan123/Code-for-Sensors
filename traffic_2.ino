#include<LiquidCrystal.h>
const int rs=13,en=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);
const int red1=3;
const int yellow1=2;
const int green1=1;
const int red2=7;
const int yellow2=6;
const int green2=5;
int i;


void setup()
{
  lcd.begin(16,2);
  pinMode(red1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);
}

void loop()
{

  for(i=0;i<=80;i++)
  {
{
  lcd.setCursor(0,0);
  lcd.print(i);
  lcd.print("       ");
  delay(100);
}


  if((i>=0) && (i<=30))
  {
  digitalWrite(red1,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(green1,LOW);
 
  digitalWrite(red2,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green2,HIGH);
  
  }
  

else if((i>=30) && (i<=50))
{
 digitalWrite(red1,LOW);
 digitalWrite(yellow1,HIGH);
 digitalWrite(green1,LOW);
 digitalWrite(red2,LOW);
 digitalWrite(yellow2,HIGH);
 digitalWrite(green2,LOW);
}


else if((i>=50) && (i<=80))
{
 digitalWrite(red1,LOW);
 digitalWrite(yellow1,LOW);
 digitalWrite(green1,HIGH);
 digitalWrite(red2,HIGH);
 digitalWrite(yellow2,LOW);
 digitalWrite(green2,LOW);
 
}
  }


delay(100);
}

