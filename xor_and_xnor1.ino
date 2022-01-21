int takeInput(){
  Serial.write("Enter values for the three inputs\n");
  Serial.write("Value 1: ");
  while (Serial.available() <= 0)
  {}
  int a = Serial.parseInt();
  Serial.println(a);
  Serial.write("Value 2: ");
  while (Serial.available() <= 0)
  {}
  int b = Serial.parseInt();
  Serial.println(b);
  Serial.write("Value 3: ");
  while (Serial.available() <= 0)
  {}
  int c = Serial.parseInt();
  Serial.println(c);
  return(a+b+c);
}
int XOR(){
  int sum = takeInput();
    if(sum%2 == 0)return 0;
    else return 1;
}
int XNOR(){
  int sum = takeInput();
    if(sum%2 == 0)return 1;
    else return 0;
}
void setup()
{
  Serial.begin(9600); //baud rate 
}
void loop()
{
  Serial.write("Enter 1 for XOR operation,");
  Serial.write("Enter 2 for XNOR operation.\n");
  Serial.write("Choice: ");
  while (Serial.available() <= 0)
  {} // will not let the program proceed until a input is given
  int choice = Serial.parseInt(); //takes the input from the user as an integer
  if(choice == 1){
    Serial.println("XOR");
    int outXOR = XOR();
    Serial.write("XOR of given three inputs is: ");
    Serial.println(outXOR);
  }
  else if (choice == 2){
    Serial.println("XNOR");
    int outXNOR = XNOR();
    Serial.write("XNOR of given three inputs is: ");
    Serial.println(outXNOR);
  }
  else Serial.write("Invalid Input, try again\n");
}