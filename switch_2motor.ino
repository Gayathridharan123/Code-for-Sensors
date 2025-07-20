const int s2=1;
const int motor3=8;
const int motor4=9;
int sb;
int y=0;

void setup()
{
 pinMode(s2,OUTPUT);
 pinMode(motor3,OUTPUT);
 pinMode(motor4,OUTPUT);
}

void loop() 
{

sb = digitalRead(s2);
 if(s2==1 && y==0)
 {
  digitalWrite(motor3,HIGH);
  digitalWrite(motor4,LOW);
  y=1;
 }
 
 else if (s2==0 && y==1)
 {
  digitalWrite(motor3,LOW);
  digitalWrite(motor4,LOW);
  y=2;
 } 

 else if (s2==1 && y==2)
 {
  digitalWrite(motor3,LOW);
  digitalWrite(motor4,HIGH);
  y=3;
 }

  else if (s2==0 && y==3)
    {
  digitalWrite(motor3,LOW);
  digitalWrite(motor4,LOW);
  y=0;
 }

}
