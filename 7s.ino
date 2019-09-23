int num[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };

void setup() {
  
for (int i=0;i<=7;i++)  //DDRD = 0xFF; ขา0-7
{
  pinMode(i,HIGH);
} 
}
void loop() {   
    
  PORTD = num[0];
  delay(2000);
  PORTD = num[1];
  delay(2000);
  PORTD = num[2];
  delay(2000);
  PORTD = num[3];
  delay(2000);
  PORTD = num[4];
  delay(2000);
  PORTD = num[5];
  delay(2000);
  PORTD = num[6];
  delay(2000);
  PORTD = num[7];
  delay(2000);
  PORTD = num[8];
  delay(2000);
  PORTD = num[9];
  delay(2000);
  
  
}
