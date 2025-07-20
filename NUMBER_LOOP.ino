#include <LiquidCrystal.h>
const int rs=5,e=18,d4=19,d5=21,d6=22,d7=23;
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
    lcd.print("     ");
    delay(300); 
}            

 
}           
  
