/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include<Servo.h>

//********** Variables ************************************************************
const int servo = 8;          // donar nom al pin 8 de l’Arduino
const int fc_cerrado = A2; 
const int fc_abierto= A5;         // donar nom al pin A5 de l’Arduino
Servo myservo;
int fc_cerrado_estado;
int fc_abierto_estado;
int pos;

//********** Setup ****************************************************************
void setup()
{
  pinMode(fc_cerrado,INPUT);
  pinMode(fc_abierto,INPUT);
  myservo.attach(servo);
  for(pos = myservo.read(); pos <= 270; pos += 1)
  {
    myservo.write(pos);
    delay(1);
  }
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  //cerrar puerta
  for(pos = 0; pos <= 180; pos += 1)
  {
    myservo.write(pos);
    delay(1);
  }
  delay(1000);
  fc_cerrado_estado=digitalRead(fc_cerrado);
  fc_abierto_estado=digitalRead(fc_abierto);
  Serial.print("final carrera cerrado=");
  Serial.print(fc_cerrado_estado);
  Serial.print("           final carrera abierto=");
  Serial.println(fc_abierto_estado);
  //abrir puerta
  for(pos = 180; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    delay(1);
  }
  delay(2000);
  fc_cerrado_estado=digitalRead(fc_cerrado);
  fc_abierto_estado=digitalRead(fc_abierto);
  Serial.print("final carrera cerrado=");
  Serial.print(fc_cerrado_estado);
  Serial.print("           final carrera abierto=");
  Serial.println(fc_abierto_estado);
}

//********** Funcions *************************************************************
