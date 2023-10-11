#include<Servo.h>
Servo myservo;

int pos;



void setup(){
  pinMode(12,OUTPUT);
  myservo.attach(8);
  for(pos = myservo.read(); pos <= 270; pos += 1) {
    myservo.write(pos);
    delay(1);
  }
  Serial.begin(9600);
}

void loop(){
  for(pos = 0; pos <= 270; pos += 1) {
    myservo.write(pos);
    delay(1);
  }
  delay(1000);
  for(pos = 270; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(1);
  }
  delay(1000);
}



