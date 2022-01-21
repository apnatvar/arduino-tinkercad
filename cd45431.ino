void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int a,b,c,d;
  int i=5;//change this number to the one you want to display
  a=i%2;
  b=(i/2)%2;
  c=(i/4)%2;
  d=(i/8)%2;
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  delay(1000);
}