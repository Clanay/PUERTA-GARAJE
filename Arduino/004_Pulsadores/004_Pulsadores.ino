/**********************************************************************************
**                                                                               **
**                               Samuel Call Ramos                               **
**                                  22/11/2023                                   **
**          Si pulsamos el pulsador 1(Up), el led verde se enciende.             **
**          En caso de que pulsemos el pulsador 2(Down), el led rojo se enciende **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
const int pulsador_up = 2;
const int pulsador_down = 3;
const int ledrojo = 10;
const int ledverde = 13;
int estado_pulsador_up;
int estado_pulsador_down;
//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
  pinMode(pulsador_up, INPUT);
  pinMode(pulsador_down, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  estado_pulsador_up=digitalRead(pulsador_up);
  estado_pulsador_down=digitalRead(pulsador_down);
  if(estado_pulsador_down==1)
  {
    digitalWrite(ledrojo,HIGH);
    digitalWrite(ledverde,LOW);
  }
  else if(estado_pulsador_up==1)
  {
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledverde,HIGH);
  }
  else
  {
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledverde,LOW);   
  }
} 
//********** Funcions *************************************************************









