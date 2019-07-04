void setup() {
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 Serial.begin(9600);
}
char income;
void loop() {
  income=Serial.read();
  switch(income)
  {
    case'f':towards();break;
    case'b':backwards();break;
    case'l':left();break;
    case'r':right();break;
    case's':stops();break;}
}
void towards()
{digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
  }
void backwards()
{digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
  }
void left()
{digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
  }
void right()
{digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
  }
void stops()
{digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
  }
