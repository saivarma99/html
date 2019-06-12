  const int trigpin=9;
const int echopin=10;
long duration;
int distance;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  
}
 void loop()
 {
   digitalWrite(trigpin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigpin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigpin, LOW);
   duration=pulseIn(echopin,HIGH);
   distance=duration*0.034/2;
   Serial.print("distance");
   Serial.println(distance);
   if(distance<30)
   { digitalWrite(11,HIGH);
     digitalWrite(12,LOW);
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
    }  
   else
  { digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  } 
}
