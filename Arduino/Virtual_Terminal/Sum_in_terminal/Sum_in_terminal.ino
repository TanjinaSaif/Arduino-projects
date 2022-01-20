int x,y;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud rate
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter 1st number :");
  while(Serial.available()==0){}
   x = Serial.read()-48;
 
   Serial.println(x);
   
  Serial.println("Enter 2nd number :");
  while(Serial.available()==0){}
   y = Serial.read()-48;
  
   Serial.println(y);
   

   Serial.println("Max:");
   int max = (x>y)? x:y;
   Serial.print(max,DEC);
   Serial.println();
 
  Serial.end();

}
