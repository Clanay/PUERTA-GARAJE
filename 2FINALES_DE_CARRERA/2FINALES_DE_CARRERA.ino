#include<Servo.h>
Servo myservo;

int pos;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  myservo.attach(8);
  pos=0;
}

void loop(){
if(digitalRead(2)){
  while((analogRead(A5)<100)||(pos<=180)){
    myservo.write(pos);
    pos=pos+1;
    } 
  }
if(digitalRead(3)){
  while((analogRead(A2)>100)||(pos>=0)){
    myservo.write(pos);
    pos=pos-1;
    } 
  }
}

