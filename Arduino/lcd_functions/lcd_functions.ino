#include <LiquidCrystal.h>
String a = "18201080";
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, smiley);
  Serial.begin(9600);
}
void loop() {
  
  lcd.home();
  lcd.setCursor(0,0);
  lcd.print("hello world!");
  lcd.setCursor(0,1);
  lcd.print("ID:");
  lcd.print(a);

  lcd.noCursor();
  lcd.cursor();
    
  lcd.noDisplay();
  lcd.display();

  lcd.blink();
  lcd.noBlink();

  lcd.scrollDisplayLeft();
  lcd.print("hello world!");
  lcd.scrollDisplayRight();

  lcd.rightToLeft();
  lcd.leftToRight();

  lcd.autoscroll();
  lcd.noAutoscroll();
  
  lcd.clear();


  
  
  
  
  
  }
