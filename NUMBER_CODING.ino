#include <LiquidCrystal.h>
const int rs=13,e=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd (rs,e,d4,d5,d6,d7);

int i;
void setup() 
{
  
  lcd.begin(16, 2);
}

void loop()
{
  for (int i = 0; i <= 10; i++)
{
               
    lcd.setCursor(0, 0);     
    lcd.print(i);
    lcd.print("        ");
}            

    delay(1000);  
}          
  
