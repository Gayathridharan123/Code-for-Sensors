#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int HB = 34;
const int threshold=50;
int sensor;
int H,count;


void setup() 
{
  lcd.begin(16,2);
  pinMode(HB,INPUT);
  Serial.begin(9600);
}


void loop()
 {
 sensor = analogRead(HB);
 Serial.println(sensor);

lcd.setCursor(0,0);
lcd.print("HB:");
lcd.print(sensor);
lcd.print("   ");


if(H==4095)
{
  H1=0;
}

else
{
  count = count+2;
   
    if (sensor>2500)
    {
      H=69+count;
    }

    else if 
    {
      H=0;
    }
}
}    
delay(1000);
}











