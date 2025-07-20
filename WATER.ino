#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int WS = 34;
int sensor;

void setup()
{
  lcd.begin(16,2);
  pinMode(WS,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor=analogRead(WS)/40.95;
  Serial.println(sensor);

  lcd.setCursor(0,0);
  lcd.print("W:");
  lcd.print(sensor);
  lcd.print("      ");
  delay(1000);
}