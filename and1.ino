void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop()
{
  if (digitalRead(8)==HIGH && digitalRead(9)==HIGH)
      digitalWrite(7,HIGH);
  else
      digitalWrite(7,LOW);
      
}