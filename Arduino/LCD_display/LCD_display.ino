#include <LiquidCrystal.h>
String a = "18201080";
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("hello world!");
  lcd.setCursor(0,1);
  lcd.print("ID:");
  lcd.print(a);
}
void loop() { }
