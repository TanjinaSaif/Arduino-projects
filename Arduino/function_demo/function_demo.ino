byte a,b,c;
byte x,y,z,d,e,f,g;

void zero(byte x,byte y,byte z,byte d,byte e,byte f,byte g){
      digitalWrite(x,HIGH);
      digitalWrite(y,HIGH);
      digitalWrite(z,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);  
}

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

  if(c == LOW){
  
    if(a == LOW && b == LOW)
    {
      zero(0,1,2,3,4,5,6);

      zero(7,8,9,10,11,12,13);
    }
  
    if(a == LOW && b == HIGH)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    if(a == HIGH && b == LOW)
    {
      one(0,1,2,3,4,5,6);
      
      zero(7,8,9,10,11,12,13);
    }
    if(a == HIGH && b == HIGH)
    {
      zero(0,1,2,3,4,5,6);
      
      one(7,8,9,10,11,12,13);
    }
 }

  else if(c == HIGH){

    if(a == LOW && b == LOW)
    {
      digitalWrite(0,HIGH);
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
    }
  
    if(a == LOW && b == HIGH)
    {
      digitalWrite(0,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }
    if(a == HIGH && b == LOW)
    {
      digitalWrite(0,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
    }
    if(a == HIGH && b == HIGH)
    {
      digitalWrite(0,HIGH);
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
    }
  
 }  

}
