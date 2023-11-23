/**********************************************************************************
**                                                                               **
**                               Samuel Call Ramos                               **
**                                  22/11/2024                                   **
**              Cuando el LDR no reciba luz, los leds harán el intermitente.     **
**                Poner un Serial Print para ver el valor del LDR.               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr=A0;
int valor_ldr;
const int ledrojo = 10;
const int ledverde = 13;

//********** Setup ****************************************************************
void setup()
{
  pinMode(ldr,INPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{

  valor_ldr=analogRead(ldr);
  Serial.println(valor_ldr);
  if(valor_ldr>400)
    {
      digitalWrite(ledverde,HIGH);
      digitalWrite(ledrojo,LOW);
      delay(200);
      digitalWrite(ledverde,LOW);
      digitalWrite(ledrojo,HIGH);

    }
}

//********** Funcions *************************************************************
