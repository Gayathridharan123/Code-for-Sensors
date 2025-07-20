const int A=13;
const int B=12;
const int C=11;
const int D=10;
const int E=9;
const int F=8;
const int G=7;

void setup()
{

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
