#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int HB = 36;
int H;
int H1;
int count;


void setup() 
{
  lcd.begin(16, 2);
  pinMode(HB,INPUT);
   Serial.begin(9600);
}



void loop()
 {
  H=analogRead(HB); 
  Serial.println(H);

  lcd.setCursor(0, 0);
  lcd.print("HB:");
  lcd.print(H1);
  lcd.print("   ");

  if(H==4095)
  {
    H1=0;
  }

  else
  {
    count=count+2;

    if(H==0)
    {
      H1=69+count;
    }
    else if ((H>0) && (H<=500))
    {
     H1=75;
    }

     else if ((H>500) && (H<=1000))
    {
     H1=80;
    }

     else if ((H>1000) && (H<=1500))
    {
     H1=85;
    }

     else if ((H>1500) && (H<=2000))
    {
     H1=90;
    }

     else if ((H>2000) && (H<=3000))
    {
     H1=95;
    }

    else if ((H>3000) && (H<=3500))
    {
     H1=99;
    }

    else if(H>3500)
    {
     H1=0;
    }
  }

    if (H1>99)
    {
      H1=0;
    }
    if(H1>=85)
    {
      lcd.setCursor(0,1);
      lcd.print("ABNORMAL");
      lcd.print("         ");
      delay(500);
    }
    else if(H1<85)
    {
      lcd.setCursor(0,1);
      lcd.print("NORMAL");
      lcd.print("         ");
      delay(500);
    }

  delay(1000);
}


