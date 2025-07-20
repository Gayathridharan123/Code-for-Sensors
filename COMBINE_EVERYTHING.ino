#include <LiquidCrystal.h>
const int rs =13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int CHAI = A2;
int GAYATHRI;
const int relayPin=0;
const int light = 9;       
const int s = 7;     
int s1;

void setup()
{
{
  
  lcd.begin(16, 2);  
  pinMode(CHAI,INPUT);
  pinMode(relayPin,OUTPUT);

}

  {
    pinMode(light, OUTPUT);      
  pinMode(s,OUTPUT); 
  }
}

  
void loop()
 {
s1 = digitalRead(s); 
GAYATHRI = analogRead(CHAI);
lcd.setCursor(0,0);
lcd.print("TEMP:");
lcd.print(GAYATHRI);
lcd.print("    ");
delay(300);

if (GAYATHRI>=50)
     {
      lcd.setCursor(0,2);
      lcd.print("ABNORMAL");
      lcd.print("    ");
      lcd.setCursor(4,0);
      lcd.print("MOTOR OFF");
      lcd.print("    ");
      digitalWrite(relayPin,LOW);
 }
 
else
 {
  lcd.setCursor(0,2);
      lcd.print("NORMAL");
      lcd.print("        ");
       lcd.setCursor(4,0);
      lcd.print("MOTOR ON");
      lcd.print("    ");
      digitalWrite(relayPin,HIGH);
      delay(300);
 }

if(s1==1)
 {
  digitalWrite(light,HIGH);
 } 

 else{
  digitalWrite(light,LOW);
 }
}

 

 

