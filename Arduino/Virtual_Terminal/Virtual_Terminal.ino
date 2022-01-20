int x = 47;
float y = 3.87;
char c = 's';
double d = 1.23456;
String s = "Tanjina";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud rate

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(x);
  Serial.println();
  
  Serial.print(c);
  Serial.println();
  
  Serial.print(s);
  Serial.println();
  
  Serial.print(d);
  Serial.println();
  
  Serial.print(y);
  Serial.println();
  Serial.println();

 //Task 2
  Serial.print(x,BIN);
  Serial.println();

  Serial.print(x,OCT);
  Serial.println();

  Serial.print(x,DEC);
  Serial.println();

  Serial.print(x,HEX);
  Serial.println();
  Serial.println();

  //Task 3
  Serial.print("DEC");
  Serial.print("      ");
  Serial.print("BIN");
  Serial.println();

  for(int i = 0; i<10 ; i++){
    Serial.print(i,DEC);
    Serial.print("        ");

    Serial.print(i,BIN);
    Serial.println();
    delay(200);
  }
  Serial.println();
  Serial.end();
  

}
