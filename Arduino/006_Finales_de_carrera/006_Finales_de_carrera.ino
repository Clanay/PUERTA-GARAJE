/**********************************************************************************
**                                                                               **
**                               Samuel Call Ramos                               **
**                                  23/11/2023                                   **
**            Los finales de carrera deberán de encender los leds.               **
**            Si la puerta toca el final de carrera de la derecha,               **
**            se deberá encender el led rojo.                                    **
**            Y si toca el de la izquierda se encenderá el led verde             **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledrojo = 10;
const int ledverde = 13;
const int cerrado=A2;
const int abierto=A5;
int estado_cerrado;
int estado_abierto;
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledverde,OUTPUT);
  pinMode(ledrojo,OUTPUT);
  pinMode(cerrado,INPUT);
  pinMode(abierto,INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  estado_cerrado=digitalRead(cerrado);
  estado_abierto=digitalRead(abierto);
  if(estado_abierto==0)
  {
    digitalWrite(ledverde,HIGH);
    digitalWrite(ledrojo,LOW);
    delay(1000);
  }
  else if(estado_cerrado==0)
  {
    digitalWrite(ledverde,LOW);
    digitalWrite(ledrojo,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(ledverde,LOW); 
    digitalWrite(ledrojo,LOW);   
  }

}

//********** Funcions *************************************************************





