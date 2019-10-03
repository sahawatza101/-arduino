#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
int LED1 =13;
int LED2 =12;
int LED3 =11;
int LED4 =10;


char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  
}
void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    Serial.println(key);
  }
  if(key == '0')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '1')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == '2')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '3')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == '4')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '5')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == '6')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '7')
  {
  digitalWrite(LED1,LOW);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == '8')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '9')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == 'A')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,LOW);  
  }
  if(key == 'B')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,LOW);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == 'C')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,LOW);  
  }
  if(key == 'D')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,LOW);  
    digitalWrite(LED4,HIGH);  
  }
  if(key == '*')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,LOW);  
  }
  if(key == '#')
  {
  digitalWrite(LED1,HIGH);  
    digitalWrite(LED2,HIGH);  
    digitalWrite(LED3,HIGH);  
    digitalWrite(LED4,HIGH);  
  }
  
}
