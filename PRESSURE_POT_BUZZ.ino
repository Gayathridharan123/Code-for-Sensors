#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int pressure=34;
const int pot=36;
const int buzz=25;
int s1;
int s2;


void setup()
{
  lcd.begin(16,2);
  pinMode(pressure,INPUT);
  pinMode(pot,INPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  s1=analogRead(pressure)/40.95;
  s2=analogRead(pot)/40.95;

  lcd.setCursor(0,0);
  lcd.print("S:");
  lcd.print(s2);
  lcd.print("     ");


  lcd.setCursor(8,0);
  lcd.print("P:");
  lcd.print(s1);
  lcd.print("     ");


  if(s1>50) 
  {
    lcd.setCursor(0,1);
    lcd.print("ABNORMAL");
    lcd.print("        ");
    digitalWrite(buzz,1);
  }
  
  if(s2>50) 
  {
    lcd.setCursor(0,1);
    lcd.print("ABNORMAL");
    lcd.print("        ");
    digitalWrite(buzz,1);
  }

 if((s1>50) && (s2>50))
  {
    lcd.setCursor(0,1);
    lcd.print("BOTH ABNORMAL");
    lcd.print("        ");
    digitalWrite(buzz,1);
  }

delay(1000);
}