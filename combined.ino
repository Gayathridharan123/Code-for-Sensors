#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int HB = 35;
const int temp=36;
const int WS=34;
const int buzzer=26;
int sensor;
int H;
int H1;
int count;
int wsensor;


void setup() 
{
  lcd.begin(16, 2);
  pinMode(HB,INPUT);
  pinMode(temp,INPUT);
  pinMode(WS,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}



void loop()
 {
  H=analogRead(HB); 
  sensor = analogRead(temp)/80; 
  wsensor=analogRead(WS)/40.95;
  Serial.println(wsensor);

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
     if (H1>99)
    {
      H1=0;
    }
  }
   

  lcd.setCursor(0, 0);
  lcd.print("HB:");
  lcd.print(H1);
  lcd.print("   ");

  lcd.setCursor(6,0);
  lcd.print("T:");
  lcd.print(sensor);
  lcd.print("      ");

  if((H1>=85)||(sensor>=35))
    {
      lcd.setCursor(0,1);
      lcd.print("ABNORMAL");
      lcd.print("         ");
    }
    else 
    {
      lcd.setCursor(0,1);
      lcd.print("         ");
    }
    
   
   if((H1>=85)||(sensor>=35)||(wsensor>=50))
   {
    digitalWrite(buzzer,HIGH);
   }
   else
   {
    digitalWrite(buzzer,LOW);
   }
  
  delay(1000);

}


