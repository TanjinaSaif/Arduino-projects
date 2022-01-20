void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //[pin no. , status-o/i]
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); //[pin no., value- HIGH/1 (5 VOLTS) OR LOW/0(0 VOLTS)]
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  
  digitalWrite(12,HIGH); //[pin no., value- HIGH/1 (5 VOLTS) OR LOW/0(0 VOLTS)]
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);

  digitalWrite(11,HIGH); //[pin no., value- HIGH/1 (5 VOLTS) OR LOW/0(0 VOLTS)]
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);

  digitalWrite(10,HIGH); //[pin no., value- HIGH/1 (5 VOLTS) OR LOW/0(0 VOLTS)]
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);

  digitalWrite(9,HIGH); //[pin no., value- HIGH/1 (5 VOLTS) OR LOW/0(0 VOLTS)]
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
  
}
