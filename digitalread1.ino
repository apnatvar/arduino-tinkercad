void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  int x=digitalRead(2);
  if (x==1)
  digitalWrite(13, HIGH);
  else
  digitalWrite(13, LOW);
}