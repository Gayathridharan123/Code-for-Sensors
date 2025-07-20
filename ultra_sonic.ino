#include <LiquidCrystal.h>
const int rs =5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigPin = 32;
const int echoPin = 33;

long duration;
int distance;

void setup() 
{
  lcd.begin(16,2);

  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 

  Serial.begin(9600); 
}
void loop() 
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