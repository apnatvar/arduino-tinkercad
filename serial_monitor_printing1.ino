void setup()
{
  Serial.begin(9600); //data transfer rate bits per second
}
int val = 33;
void loop(){
  while (val<=126){
  Serial.println("----------------------");
  Serial.print("ASCII Code for: ");
  Serial.write(val);
  Serial.println();
  Serial.print("in Hexadecimal is   ");
  Serial.println(val,HEX);
  Serial.print("in Decimal is       ");
  Serial.println(val,DEC);
  Serial.print("in Octal is         ");
  Serial.println(val,OCT);
  Serial.print("in Binary is    ");
  Serial.println(val,BIN);
  Serial.print("----------------------");             
  val++;
	}
}
/*int x = 0;
void loop()
{
  if (x==0){
    for (int i = 0; i < 60; i++)Serial.print("*");
    Serial.println();
    Serial.print("Roll.No:");
    for (int i = 0; i < 30; i++)Serial.print("_");
    Serial.println();
    for (int i = 0; i < 30; i++)Serial.print("*");
    Serial.println();
    Serial.print("Name:");
    for (int i = 0; i < 30; i++)Serial.print("_");
    Serial.println();
    for (int i = 0; i < 45; i++)Serial.print("*");
    Serial.println();
    Serial.print("Branch:");
    for (int i = 0; i < 30; i++)Serial.print("_");
    Serial.println();
    for (int i = 0; i < 40; i++)Serial.print("*");
    x = 1;
  }
}*/