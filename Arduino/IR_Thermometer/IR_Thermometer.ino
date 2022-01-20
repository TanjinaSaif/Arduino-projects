#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

//Infrared Sensor
const int IRSensor = 8;
const int led = 9;

//Temperature Sensor
const int tempSensor = A0; 
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
void setup() {
  // put your setup code here, to run once:
  {
  //IR Sensor
  pinMode(IRSensor,INPUT);
  pinMode(led,OUTPUT);

  //Temperature LCD Display
  pinMode(tempSensor, INPUT);
  lcd.begin(16,2);
  lcd.createChar(1, degree_symbol);
  lcd.setCursor(0,0);
  lcd.print("Temperature");
  lcd.setCursor(0,1);
  lcd.print("  Sensor  ");
  delay(1000);
  lcd.clear();
}

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorState = digitalRead(IRSensor);
  //Temperature calculation
  float temp_reading=analogRead(tempSensor);
  float temp_celcius=temp_reading*(5.0/1023.0)*100;
  float temp_farenheit = (temp_celcius*1.8)+32;
  delay(10); 

  //Object detected,Will display temperature on LCD
  if(sensorState == HIGH) //If IR Sensor detects an Obstacle/Object,then sensorState is HIGH
  {
    digitalWrite(led,LOW); //IR Sensor led Off

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature is");
    lcd.setCursor(4,1);
    lcd.print(temp_farenheit);
    lcd.write(1);
    lcd.print("F");
    delay(1000);
    lcd.clear();
    //Checking Fever
    if(temp_celcius>=37.5)
    {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("High Temperature");
    lcd.setCursor(0,1);
    lcd.print("Access Denied");
    delay(1000);
    }
    else
    {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Access Granted!");
    delay(1000);
    }
  }
  //No object detected,Will not display temperature on LCD
  else       //If IR Sensor doesn't detects an Obstacle/Object,then sensorState is LOW
  {
    digitalWrite(led,HIGH);
    lcd.clear(); 
    lcd.setCursor(0,0);
    lcd.print("No Object");
    lcd.setCursor(0,1);
    lcd.print("Detected");
    delay(1000);
    lcd.clear();
  }

}
