#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int LDR=35;
const int relayPin=2;
int detector;

void setup()
{
  lcd.begin(16,2);
  pinMode(LDR,INPUT);
  pinMode(relayPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  detector=100-analogRead(LDR)/40.95;
  Serial.println(detector);
  
  lcd.setCursor(0,0);
  lcd.print("LDR:");
  lcd.print(detector);
  lcd.print("        ");
 

  if(detector>=35)
  {
    lcd.setCursor(0,1);
    lcd.print("LIGHT OFF");
    lcd.print("       ");
    digitalWrite(relayPin,1);
  }

  else
   {
    lcd.setCursor(0,1);
    lcd.print("LIGHT ON");
    lcd.print("       ");
    digitalWrite(relayPin,0);
  }
  delay(1000);
  }