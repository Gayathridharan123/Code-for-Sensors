#include<LiquidCrystal.h>
const int rs=13,en=12,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);
const int relayPin=2;
const int trigPin = 7;
const int echoPin = 6;
long duration;
int distance;

void setup() 
{
  lcd.begin(16,2);
  pinMode(relayPin, OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 

  Serial.begin(9600); 
}

void loop() 
{

{
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
 
  distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.println(distance);



  lcd.setCursor(0,0);
  lcd.print("D:");
  lcd.print(distance);
  lcd.print("    ");
  delay(1000);
}

if(distance>=20)
{
   
  lcd.setCursor(0,1);
  lcd.print("PEOPLE NOT ENTER");
  lcd.print("              ");
  delay(1000);
digitalWrite(relayPin,0);
}


else
{
  
  lcd.setCursor(0,1);
  lcd.print("PEOPLE ENTER");
  lcd.print("              ");
  delay(1000);
digitalWrite(relayPin,1);
}

delay(1000);
}