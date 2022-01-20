
const int IRSensor = 8;
const int led = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(IRSensor,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorState = digitalRead(IRSensor);
  if(sensorState == HIGH) //If IR Sensor detects an Obstacle/Object,then sensorState is HIGH
  {
    digitalWrite(led,LOW); //led Off
  }
  else       //If IR Sensor doesn't detects an Obstacle/Object,then sensorState is LOW
  {
    digitalWrite(led,HIGH); 
  }

}
