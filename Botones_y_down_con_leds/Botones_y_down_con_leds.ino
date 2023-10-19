const int pulsador_up = 2;
const int pulsador_down = 3;
const int ledrojo = 10;
const int ledverde = 13;
int estado_pulsador_up=0;
int estado_pulsador_down=0;

void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo, OUTPUT);
  pinMode(pulsador_up, INPUT);
  pinMode(pulsador_down, INPUT);
  estado_pulsador_up=0;
  estado_pulsador_down=0;
}
void loop() 
{
  estado_pulsador_up=digitalRead(pulsador_up);
  estado_pulsador_down=digitalRead(pulsador_down);
  if(estado_pulsador_up==1)
  {
    digitalWrite(ledverde,HIGH);
    digitalWrite(ledrojo,LOW);
  }
  if(estado_pulsador_down==1)
  {
    digitalWrite(ledverde,LOW);
    digitalWrite(ledrojo,HIGH); 
  }
}



