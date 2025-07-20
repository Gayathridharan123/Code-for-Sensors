#include <LiquidCrystal.h>
const int rs =5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int CHAI = 39;
int GAYATHRI;

void setup() 
{
  
  lcd.begin(16, 2);  
  pinMode(CHAI,INPUT);

}

void loop()

 {
  
GAYATHRI = analogRead(CHAI);
lcd.setCursor(0,0);
lcd.print("T:");
lcd.print(GAYATHRI);
lcd.print("    ");
delay(1000);
}