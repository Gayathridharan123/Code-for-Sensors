#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

const int IR = 33;


int sensor;
int count;



void setup()
{
  lcd.begin(16,2);
  pinMode(IR,INPUT);

  lcd.init();
  lcd.backlight();
}



void loop()

{

  sensor = 1-digitalRead(IR);

  lcd.setCursor(0,0);
  lcd.print("IR:");
  lcd.print(sensor);
  lcd.print("   ");


delay(1000);

}