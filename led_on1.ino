const int light = 9;       
const int s = 7;     
int s1;


void setup() 

{
  pinMode(light, OUTPUT);      
  pinMode(s , OUTPUT); 
  }
  
  
void loop() 
{

 s1 = digitalRead(s);

 if(s1==1)
 {
  digitalWrite(light,HIGH);
 } 

 else{
  digitalWrite(light,LOW);
 }
}
