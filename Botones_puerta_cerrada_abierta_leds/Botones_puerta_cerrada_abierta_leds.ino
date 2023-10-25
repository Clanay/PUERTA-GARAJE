const int servo = 8;          // donar nom al pin 8 de l’Arduino    
const int pulsador_up = 2;
const int pulsador_down = 3;
const int ledrojo = 10;
const int ledverde = 13;
int estado_pulsador_up=0;
int estado_pulsador_down=0;
int pos;

void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
  pinMode(pulsador_up, INPUT);
  pinMode(pulsador_down, INPUT);
  estado_pulsador_up=0;
  estado_pulsador_down=0;
  myservo.attach(servo);
  for(pos = myservo.read(); pos <= 270; pos += 1) 
  {
    myservo.write(pos);
    delay(1);
  }
}


void loop(){










#include<Servo.h>
Servo myservo;

int pos;



void setup(){
  myservo.attach(servo);
  for(pos = myservo.read(); pos <= 270; pos += 1) 
  {
    myservo.write(pos);
    delay(1);
  }
  Serial.begin(9600);
}

void loop(){
  for(pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(1);
  }
  delay(1000);
  for(pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(1);
  }
  delay(2000);
}


