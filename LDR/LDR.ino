void setup(){
  pinMode(13,OUTPUT);
}
void loop(){
  if(analogRead(A0)>400){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(100);
}