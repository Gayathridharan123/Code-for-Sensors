
#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#include <DHT.h>

#define DPIN 26        
#define DTYPE DHT11   

DHT dht(DPIN,DTYPE);

void setup() 
{
  lcd.begin(16,2);
  Serial.begin(9600);
  dht.begin();
}

void loop()
 {
  
  
  float tc = dht.readTemperature();  
  float hu = dht.readHumidity();          
  
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(tc);
  lcd.print("      ");
  
  lcd.setCursor(0,1);
  lcd.print(" H: ");
  lcd.print(hu);
  lcd.print("      ");

  delay(1000);
  
}