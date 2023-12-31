/**********************************************************************************
**                                                                               **
**                               Samuel Call Ramos                               **
**                                  23/11/2023                                   **
** La maqueta es un garaje, cuando pulsamos el pulsador de arriba(pulsador_up)   ** 
** el zumbador debe de hacer un pitido,la puerta se abre mientras el led verde   ** 
** está encendido.                                                               ** 
** En caso de que pulsemos el botón de abajo(pulsador down),                     ** 
** la puerta debe de cerrarse(cuando esté abierta),el zumbador hacer el pitido   ** 
** y por último el led rojo parpadear al mismo tiempo que pita el zumbador.      ** 
** En el momento en que el Ldr no detecte luz(se hace de noche),                 ** 
** los leds van a hacer un intermitente(si la puerta está abierta y es de noche),**  
** en cuanto el LDR recibe luz, se parará el intermitente.                       ** 
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include<Servo.h>

//********** Variables ************************************************************

Servo myservo;
const int servo = 8;          // donar nom al pin 8 de l’Arduino    
const int pulsador_up = 2;
const int pulsador_down = 3;
const int ledrojo = 10;
const int ledverde = 13;
const int zumba=12;
const int ldr=A0;
const int cerrado=A2;
const int abierto=A5;
int valor_ldr;
int estado_cerrado;
int estado_abierto;
int estado_pulsador_up;
int estado_pulsador_down;
int pos;
int pito;
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
  pinMode(pulsador_up, INPUT);
  pinMode(pulsador_down, INPUT);
  pinMode(zumba,OUTPUT);
  pinMode(ldr,INPUT);
  pinMode(cerrado,INPUT);
  pinMode(abierto,INPUT);
  digitalWrite(ledrojo,HIGH);
  myservo.attach(servo);
  myservo.write(180);

}

//********** Loop *****************************************************************
void loop()
{
  delay(500);
  estado_cerrado=digitalRead(cerrado);
  estado_abierto=digitalRead(abierto);
  estado_pulsador_up=digitalRead(pulsador_up);
  estado_pulsador_down=digitalRead(pulsador_down);
  valor_ldr=analogRead(ldr);
  digitalWrite(ledrojo,LOW);
  digitalWrite(ledverde,LOW);
  if(estado_pulsador_down==1 && estado_cerrado==1)
  {
    digitalWrite(ledrojo,HIGH);
    digitalWrite(ledverde,LOW);
    for(pito =0; pito <=5; pito +=1) 
    {
      digitalWrite(zumba,HIGH);
      digitalWrite(ledrojo,HIGH);
      delay(200);
      digitalWrite(zumba,LOW);
      digitalWrite(ledrojo,LOW);
      delay(200);
    }
    digitalWrite(ledrojo,HIGH);
    for(pos = 0; pos <= 180; pos += 1) 
    { 
      myservo.write(pos);
      delay(10);
    }
    digitalWrite(ledrojo,LOW);
  }
  if(estado_pulsador_up==1 && estado_abierto==1)
  {
    digitalWrite(ledrojo,LOW);
    for(pito =0; pito <=5; pito +=1) 
    {
      if(valor_ldr>400)
      {
        digitalWrite(zumba,HIGH);
        digitalWrite(ledverde,HIGH);
        delay(200);
        digitalWrite(zumba,LOW);
        digitalWrite(ledverde,LOW);
        delay(200);
      }
      else
      {
        digitalWrite(zumba,HIGH);
        delay(200);
        digitalWrite(zumba,LOW);
        delay(200);
      }
      
    }
    digitalWrite(ledverde,HIGH);
     
    for(pos = 180; pos >= 0; pos -= 1) 
    {
      myservo.write(pos);
      delay(10);
    }
  }
  estado_cerrado=digitalRead(cerrado);
  estado_abierto=digitalRead(abierto);
  if(valor_ldr>400 && estado_cerrado==1)
    {
      digitalWrite(ledverde,HIGH);
      digitalWrite(ledrojo,LOW);
      delay(200);
      digitalWrite(ledverde,LOW);
      digitalWrite(ledrojo,HIGH);

    }
}

//********** Funcions *************************************************************


