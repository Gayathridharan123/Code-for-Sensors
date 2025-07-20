const int M1 =13; 
const int M2 =12;
const int M3 =11; 
const int M4 =10;
const int S1=8; 
const int S2=7;

int S11;
int x=0;
int S12;
int y=0;

void setup()
 {                                                        
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);
    pinMode(M3, OUTPUT);
    pinMode(M4, OUTPUT);
    pinMode(S1, OUTPUT); 
    pinMode(S2, OUTPUT); 
}

void loop()
 {
     S11 = digitalRead(S1);
     S12= digitalRead(S2);
     
    if (S1 == 1 && x == 0)
    {
      
        digitalWrite(M1,HIGH);
        digitalWrite(M2,LOW);
        
        x=1;

     } 
        else if(S1 == 0 && x == 1)
        {
            digitalWrite(M1,LOW);
            digitalWrite(M2,LOW);
            
            x=2;
        }
          else if(S1 == 1 && x == 2)
          {
            digitalWrite(M1,LOW);
            digitalWrite(M2,HIGH);
            
            x=3;
          }
            else if(S1 == 0 && x == 3)
           
            {
               digitalWrite(M1,LOW);
               digitalWrite(M2,LOW);
               
              x=0;
             }

              if (S2 == 1 && y == 0)
    {
      
        digitalWrite(M3,HIGH);
        digitalWrite(M4,LOW);
        
        y=1;

     } 
        else if(S2 == 0 && y == 1)
        {
            digitalWrite(M3,LOW);
            digitalWrite(M4,LOW);
            
            y=2;
        }
          else if(S2 == 1 && y == 2)
          {
            digitalWrite(M3,LOW);
            digitalWrite(M4,HIGH);
            
            y=3;
          }
            else if(S2 == 0 && y == 3)
           
            {
               digitalWrite(M3,LOW);
               digitalWrite(M4,LOW);
               
              y=0;
             }
 }