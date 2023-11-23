/**********************************************************************************
**                                                                               **
**                              Samuel Call Ramos                                **
**                                 23/11/2023                                    **
**    El servo deberá de ser capaz de cerrar y abrir la puerta, cada 7s.         **
**      El tiempo que debe de tardar en cerrar la puerta deberá de ser 2s        **
**                               y para abrir 2s.                                **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include<Servo.h>


//********** Variables ************************************************************
Servo myservo;
const int servo = 8; 
int pos;
//********** Setup ****************************************************************
void setup()
{
  pinMode(12,OUTPUT);
  myservo.attach(8);
  for(pos = myservo.read(); pos <= 270; pos += 1) {
    myservo.write(pos);
    delay(1);
  }
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
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

//********** Funcions *************************************************************






