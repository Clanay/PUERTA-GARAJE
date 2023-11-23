/**********************************************************************************
**                                                                               **
**                               Samuel Call Ramos                               **
**                                  22/11/2024                                   **
**    Los leds(verde y rojo) deberán de hacer un intermitente de 0,5s siempre    **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledrojo = 10;
const int ledverde = 13;

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(ledverde,HIGH);
  delay(500);
  digitalWrite(ledverde,LOW);
  digitalWrite(ledrojo,HIGH);
  delay(500);
  digitalWrite(ledrojo,LOW);
}

//********** Funcions *************************************************************


