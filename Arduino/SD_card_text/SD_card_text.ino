#include<SPI.h>
#include<SD.h>

const int trigpin = 9;
const int echopin = 8;
const int led = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  pinMode(led,OUTPUT);

  if(!SD.begin(10)){
    Serial.println("Initialization failed");
    while(1);
  }
  Serial.println("Initialization done");
  delay(2000);
}

File myFile;
uint16_t line = 1;

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

 duration = pulseIn(echopin,HIGH);
 distance = (duration/2)* 0.034;

 myFile = SD.open("text.txt",FILE_WRITE);

 if(myFile){
  Serial.print(line);
  Serial.print(":   Distance   ");
  Serial.println(distance);
  //Write data to SD card file (sensorData.txt)
  myFile.print(line++);
  myFile.println("   Distance   ");
  myFile.println(distance);
  myFile.close();
  delay(500);
 }
 else{
  Serial.println("no");
 }

 if(distance < 10 )
 {
  digitalWrite(led,HIGH);
 }
 else
 {
  digitalWrite(led,LOW);
 }
}
