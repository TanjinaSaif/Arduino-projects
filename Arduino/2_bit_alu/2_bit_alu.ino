#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int m,s1,s0,a,b;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

  pinMode(6,INPUT);
  pinMode(7,INPUT);
  
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);

  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(6);
  b = digitalRead(7);
  
  m = digitalRead(8);
  s1 = digitalRead(9);
  s0 = digitalRead(10);

  if(m == 0){
    if(s1 == 0 && s0 == 0){
      digitalWrite(13,a&b);

      lcd.setCursor(0,0);
      lcd.print("A.B (AND)");
      delay(100);
      lcd.clear();
    }
    else if(s1 == 0 && s0 == 1){
      digitalWrite(13,a|b);

      lcd.setCursor(0,0);
      lcd.print("A+B (OR)");
      delay(100); 
      lcd.clear();    
    }
    else if(s1 == 1 && s0 == 0){
      digitalWrite(13,a^b);

      lcd.setCursor(0,0);
      lcd.print("A^B (XOR)");
      delay(100);  
      lcd.clear();    
    }
    else if(s1 == 1 && s0 == 1){
      digitalWrite(13,~a);

      lcd.setCursor(0,0);
      lcd.print("A' (NOT)"); 
      delay(100);  
      lcd.clear();  
    }
  }

  if(m == 1){
    if(s1 == 0 && s0 == 0){
      digitalWrite(13,a+b);

      lcd.setCursor(0,0);
      lcd.print("A+B (Addition)");
      delay(100);
      lcd.clear();
    }
    else if(s1 == 0 && s0 == 1){
      digitalWrite(13,a-b);

      lcd.setCursor(0,0);
      lcd.print("A-B (Subtraction)");  
      delay(100);  
      lcd.clear();
    }
    else if(s1 == 1 && s0 == 0){
      digitalWrite(13,a+1);

      lcd.setCursor(0,0);
      lcd.print("A+1 (Increment)");
      delay(100);  
      lcd.clear(); 
    }
    else if(s1 == 1 && s0 == 1){
      digitalWrite(13,a-1);

      lcd.setCursor(0,0);
      lcd.print("A-1 (Decrement)"); 
      delay(100);  
      lcd.clear();  
    }
  }


}
