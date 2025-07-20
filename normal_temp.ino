#include <LiquidCrystal.h>
const int rs =13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int CHAI = A2;
int GAYATHRI;
const int relayPin=0;

void setup() 
{
  
  lcd.begin(16, 2);  
  pinMode(CHAI,INPUT);
  pinMode(relayPin,OUTPUT);

}

void loop()
 {
if (GAYATHRI>=50)
 {
  
GAYATHRI = analogRead(CHAI);
lcd.setCursor(0,0);
lcd.print("TEMP:");
lcd.print(GAYATHRI);
lcd.print("    ");
delay(300);
}

     {
      lcd.setCursor(0,2);
      lcd.print("ABNORMAL");
      lcd.print("    ");
      digitalWrite(relayPin,LOW);
 }
 
 else
 {
  lcd.setCursor(0,2);
      lcd.print("NORMAL");
      lcd.print("        ");
      digitalWrite(relayPin,HIGH);
 }
 delay(300);
 }


 
