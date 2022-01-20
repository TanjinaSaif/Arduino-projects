byte a,b;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,INPUT);
  pinMode(8,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(8);
  b = digitalRead(9);

  digitalWrite(13,a^b);
  digitalWrite(12,a&b);

}
