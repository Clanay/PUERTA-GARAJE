const int pulsador_up=2;
const int pulsador_down=3;
const int ledrojo=10;
const int ledverde=13;

void setup()
{
  pinMode(ledverde,OUTPUT);
  pinMode(ledrojo,OUTPUT);
  pinMode(pulsador_up,INPUT);
  pinMode(pulsador_down,INPUT);
}
void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
void loop()
{
  if(digitalRead(2)){
      digitalWrite(13,HIGH);
  }
  else{
  digitalWrite(13,LOW);
  }
  delay(100);
}
