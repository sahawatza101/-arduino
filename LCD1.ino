
/*#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("58045848!");
 
  
}
void name(){}
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
   lcd.print(name);
}
 */



#include <LiquidCrystal.h>

// initialize the library
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte s[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b11110,
  0b00010,
  0b11110,
  0b10010,
  0b11010
};
byte h[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b11011,
  0b01011,
  0b01110,
  0b01001,
  0b01001
};   
byte w[8] = {
  0b01000,
  0b01110,
  0b00000,
  0b01110,
  0b01010,
  0b00010,
  0b00110,
  0b00110
};       
byte s1[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b11110,
  0b00010,
  0b11110,
  0b10010,
  0b11010
};       
byte s2[8] = {
  0b00011,
  0b00100,
  0b00001,
  0b11110,
  0b00010,
  0b11110,
  0b10010,
  0b11010
};


void setup()
{
  
  lcd.setCursor(0, 0);
  lcd.print("58045848!");
  // create a new custom character
  
  lcd.createChar(0, s);
  lcd.createChar(1, h);
  lcd.createChar(2, w);
  lcd.createChar(3, s1);
  lcd.createChar(4, s2);
  // set up number of columns and rows
  lcd.begin(16, 2);
  
  // print the custom char to the lcd
  // why typecast? see: http://arduino.cc/forum/index.php?topic=74666.0
  lcd.write((uint8_t)0);
  lcd.write((uint8_t)1);
  lcd.write((uint8_t)2);
  lcd.write((uint8_t)3);
  lcd.write((uint8_t)4);
  
 


  
}
void loop()
{
}
