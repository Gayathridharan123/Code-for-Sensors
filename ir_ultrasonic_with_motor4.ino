#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int IR = 36;
const int relayPin = 2;
const int trigPin = 32;
const int echoPin = 33;

long duration;
int distance;
int sensor;
int count;

void setup() 
{
  lcd.begin(16, 2);
  pinMode(IR, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}



void loop()
 {
 
  sensor = 1 - digitalRead(IR);
   digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    
    distance = duration * 0.034 / 2;


 
  lcd.setCursor(0, 0);
  lcd.print("IR:");
  lcd.print(sensor);
  lcd.print("   ");

  
  if (sensor == 1) 
  {
   count=count+1;
  } 
  
  if (count > 10)
  {
    count = 0;
  }


  lcd.setCursor(0, 1);
  lcd.print("COUNT:");
  lcd.print(count);
  lcd.print("      ");

 
  if (count>5)
   {
  
     lcd.setCursor(6, 0);
    lcd.print("D:");
    lcd.print(distance);
    lcd.print("      ");

    
    if (distance<30)
     {
      digitalWrite(relayPin, HIGH); 
    } 
    
    else
     {
      digitalWrite(relayPin, LOW);
    }
  } 
  
  else 
  {
    
    lcd.setCursor(6, 0);
    lcd.print("       ");
    digitalWrite(relayPin, LOW); 
  }

  delay(1000); 
}






