const int M1 =13; 
const int M2 =12;
const int M3 =11; 
const int M4 =10;
const int Switch1=8; 
const int Switch2=7;

int S1;
int x=0;
int S2;
int y=0;

void setup()
 {                                                        
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);
    pinMode(M3, OUTPUT);
    pinMode(M4, OUTPUT);
    pinMode(Switch1, OUTPUT); 
    pinMode(Switch2, OUTPUT); 
}

void loop() 
{
     S1 = digitalRead(Switch1);
     S2 = digitalRead(Switch2);
     
 

  if (S1 == 1 && x == 0)
    {
      
        digitalWrite(M1,1);
        digitalWrite(M2,0);
        
        x=1;

     } 
        else if(S1 == 0 && x == 1)
        {
            digitalWrite(M1,0);
            digitalWrite(M2,0);
            
            x=2;
        }
          else if(S1 == 1 && x == 2)
          {
            digitalWrite(M1,0);
            digitalWrite(M2,1);
            
            x=3;
          }
            else if(S1 == 0 && x == 3)
           
            {
               digitalWrite(M1,0);
               digitalWrite(M2,0);
               
              x=0;
             }

              if (S2 == 1 && y == 0)
    {
      
        digitalWrite(M3,1);
        digitalWrite(M4,0);
        
        y=1;

     } 
        else if(S2 == 0 && y == 1)
        {
            digitalWrite(M3,0);
            digitalWrite(M4,0);
            
            y=2;
        }
          else if(S2 == 1 && y == 2)
          {
            digitalWrite(M3,0);
            digitalWrite(M4,1);
            
            y=3;
          }
            else if(S2 == 0 && y == 3)
           
            {
               digitalWrite(M3,0);
               digitalWrite(M4,0);
               
              y=0;
             }
 }