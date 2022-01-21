void setup()
{
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  //clockwise
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  delay(3000);
  //rest
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  delay(3000);
  //anti-clockwise
  digitalWrite(3, HIGH);
  digitalWrite(8, LOW);
  delay(3000);
  //rest
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  delay(3000);
  
}