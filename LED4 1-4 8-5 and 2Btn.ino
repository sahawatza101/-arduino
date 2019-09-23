
void setup()
{
  for(int i=2;i<=9;i++){
  pinMode(i, OUTPUT);
  }
  for(int i=2;i<=9;i++){
    digitalWrite(i,HIGH);
  }
}

void loop()
{
int j=9;
  for(int i=2;i<=9;i++){
    digitalWrite(i,LOW);
    digitalWrite(j,LOW);
    if(i!=5&&j!=6){
      if(i!=9&&j!=2){
        delay(500);
  }
}
    digitalWrite(i,HIGH);
    digitalWrite(j,HIGH);
    j--;
  }
}
