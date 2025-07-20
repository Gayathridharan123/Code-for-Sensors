#include <LiquidCrystal.h>
const int rs =6, en = 5, d4 = 4, d5 = 3, d6 = 2, d7 = 1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int CHAI = A0;
int GAYATHRI;
const int A=13;
const int B=12;
const int C=11;
const int D=10;
const int E=9;
const int F=8;
const int G=7;

void setup() 
{
  
  lcd.begin(16, 2);  
  pinMode(CHAI,INPUT);

pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);
}

void loop()

{

GAYATHRI = analogRead(CHAI);
lcd.setCursor(0,0);
lcd.print("T:");
lcd.print(GAYATHRI);
lcd.print("    ");
 


  if (GAYATHRI>50)
     {
      lcd.setCursor(0,1);
      lcd.print(" ABNORMAL TEMP ");
      lcd.print("                  ");
     
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);
delay(500);

      
      
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);;
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);;
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);;
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(500);
}

 
 else
 {
     lcd.setCursor(0,1);
      lcd.print("NORMAL TEMP ");
      lcd.print("                  ");
 

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);


digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(500);
 }
 delay(1000);
}







