void setup()
{
   pinMode(0,OUTPUT);
   pinMode(1,OUTPUT);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   Serial.begin(9600);
}

byte X=0;

void loop()
{
   if(Serial.available()>0)
   {
    
     X=Serial.read();
     X=X-'0';
     digitalWrite(3,LOW);
     delay(10);
  if(X&0x1)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
  }
  
  if(X>>1&0x1)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }
  
  if(X>>2&0x1)
  {
    digitalWrite(6,HIGH);
  }
     
  else
  {
    digitalWrite(6,LOW);
  }
  
  if(X>>3&0x1)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }
   }
}
   
