#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int res=36;
int s;
int s1;
int count;


void setup()
{
  lcd.begin(16,2);
  pinMode(res,INPUT);
  Serial.begin(9600);
}


void loop()
{
  s=analogRead(res);
  Serial.println(s);

  lcd.setCursor(0,0);
  lcd.print("RES:");
  lcd.print (s1);
  lcd.print("      ");
  delay(1000);

  if(s==0)
  {
    s1=0;
  }

  else
  {
    count=count+2;
    s1=16+count;
  

  if((s>0) && (s<=500))
  {
    s1=20;
  }
  

  else if((s>500) && (s<=1000))
  {
    s1=25;

  }

  else if((s>1000) && (s<=2000))
  {
    s1=30;
  }

  else if((s>2000) && (s<=3000))
  {
    s1=35;
  }

 else if(s>3000)
  {
    s1=40;
  }
  }


if(s1>22)
{
 lcd.setCursor(0,1);
  lcd.print ("ABNORMAL");
  lcd.print("              ");
}

else
{
  lcd.setCursor(0,1);
  lcd.print("               ");
}

  delay(1000);
  }