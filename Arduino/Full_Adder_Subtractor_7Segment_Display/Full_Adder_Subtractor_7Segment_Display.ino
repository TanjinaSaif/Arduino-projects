byte a,b,c,s;
byte x,y,z,d,e,f,g;

//Function to display 0
void zero(byte x,byte y,byte z,byte d,byte e,byte f,byte g){
      digitalWrite(x,HIGH);
      digitalWrite(y,HIGH);
      digitalWrite(z,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);  
}
//Function to display 1
void one(byte x,byte y,byte z,byte d,byte e,byte f,byte g){
      digitalWrite(x,LOW);
      digitalWrite(y,HIGH);
      digitalWrite(z,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);  
}


void setup() {
  // put your setup code here, to run once:
  pinMode(A2,INPUT);
  
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT); 
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(A5);
  b = digitalRead(A4);
  c = digitalRead(A3);
  s = digitalRead(A2);
  
  // Full Adder
  if(s == LOW){
  
    if(a == LOW && b == LOW && c == LOW)
    {
      zero(0,1,2,3,4,5,6);

      zero(7,8,9,10,11,12,13);
    }
  
    else if(a == LOW && b == LOW && c == HIGH)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == LOW && b == HIGH && c == LOW)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == LOW && b == HIGH && c == HIGH)
    {
      zero(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == LOW && c == LOW)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == LOW && c == HIGH)
    {
      zero(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == HIGH && c == LOW)
    {
      zero(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == HIGH && c == HIGH)
    {
      one(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
 }
  
  //Full Subtractor
  else if(s == HIGH){

    if(a == LOW && b == LOW && c == LOW)
    {
      zero(0,1,2,3,4,5,6);

      zero(7,8,9,10,11,12,13);
    }
  
    else if(a == LOW && b == LOW && c == HIGH)
    {
      one(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == LOW && b == HIGH && c == LOW)
    {
      one(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == LOW && b == HIGH && c == HIGH)
    {
      zero(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == LOW && c == LOW)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == LOW && c == HIGH)
    {
      zero(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == HIGH && c == LOW)
    {
      zero(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    
    else if(a == HIGH && b == HIGH && c == HIGH)
    {
      one(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
 }  
}
