int CountUp = 0;
int CountDown = 0;
int Reset = 0;
int LED_Back = 0;
int LED_Front = 0;

int Seven_Segment_to_hex[10][4] =
{
  { 0 , 0 , 0 , 0 },
  { 0 , 0 , 0 , 1 },
  { 0 , 0 , 1 , 0 },
  { 0 , 0 , 1 , 1 },
  { 0 , 1 , 0 , 0 },
  { 0 , 1 , 0 , 1 },
  { 0 , 1 , 1 , 0 },
  { 0 , 1 , 1 , 1 },
  { 1 , 0 , 0 , 0 },
  { 1 , 0 , 0 , 1 }
};
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT); // CountUp
  pinMode(3,INPUT); // CountDown
  pinMode(4,INPUT); // Reset
  for(int i = 5; i < 13;i++)
  {
    pinMode(i,OUTPUT);  
  }
  for(int i = 5 ; i < 13;i++)
  {
     digitalWrite(i,LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  CountUp = digitalRead(2);
  CountDown = digitalRead(3);
  Reset = digitalRead(4);

  if(CountUp == HIGH)
  {	
	LED_Front ++;
	if(LED_Front > 9)
		LED_Front = 0;
			digitalWrite(9,Seven_Segment_to_hex[LED_Front][0]);
			digitalWrite(10,Seven_Segment_to_hex[LED_Front][1]);
			digitalWrite(11,Seven_Segment_to_hex[LED_Front][2]);
			digitalWrite(12,Seven_Segment_to_hex[LED_Front][3]);	
	
  }
	else if(CountDown == HIGH)
	  {	
		LED_Back ++;
	if(LED_Back > 9)
		LED_Back = 0;
			digitalWrite(5,Seven_Segment_to_hex[LED_Front][0]);
			digitalWrite(6,Seven_Segment_to_hex[LED_Front][1]);
			digitalWrite(7,Seven_Segment_to_hex[LED_Front][2]);
			digitalWrite(8,Seven_Segment_to_hex[LED_Front][3]);	
		
	  }
	
	
}

