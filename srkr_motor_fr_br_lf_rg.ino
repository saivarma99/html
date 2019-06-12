void setup() 
{
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);  
}
void loop () 
{  
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(5000); 
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(5000);
  
  
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(5000);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(5000);
  
  
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH); 
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(5000);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(5000);
  
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(5000);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(5000);
  
}
