void setup()
{

for (int i=2;i<=9;i++)
{
  pinMode(i,HIGH);
}
  
 
}
void loop(){
  
  for(int i=2;i<=9;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }

  
}
