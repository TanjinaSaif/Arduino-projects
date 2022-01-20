#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

const int Sensor = A0; 
byte degree_symbol[8] = 
              {
                0b00111,
                0b00101,
                0b00111,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000
              };
void setup()
{
  pinMode(Sensor, INPUT);
  lcd.begin(16,2);
  lcd.createChar(1, degree_symbol);
  lcd.setCursor(0,0);
  lcd.print("    Digital    ");
  lcd.setCursor(0,1);
  lcd.print("  Thermometer   ");
  delay(4000);
  lcd.clear();
}
void loop()
{
  
     float temp_reading=analogRead(Sensor);
     float temperature=temp_reading*(5.0/1023.0)*100;
     float temp_farenheit = (temperature*1.8)+32;
     delay(10); 
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature in F");
    lcd.setCursor(4,1);
    lcd.print(temp_farenheit);
    lcd.write(1);
    lcd.print("F");
    delay(1000);
}
