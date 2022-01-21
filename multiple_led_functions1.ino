void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  //analog sequential dim 
  //pin 1 is exchanged for pin 6
  analogWrite(3,255);
  delay(1000);
  analogWrite(5,255);
  delay(1000);
  analogWrite(2,255);
  delay(1000);
  analogWrite(6,255);
  delay(1000);
  analogWrite(4,255);
  delay(1000);
  analogWrite(3,150);
  delay(1000);
  analogWrite(5,150);
  delay(1000);
  analogWrite(2,150);
  delay(1000);
  analogWrite(6,150);
  delay(1000);
  analogWrite(4,150);
  delay(1000);
  analogWrite(3,0);
  delay(1000);
  analogWrite(5,0);
  delay(1000);
  analogWrite(2,0);
  delay(1000);
  analogWrite(6,0);
  delay(1000);
  analogWrite(4,0);
  delay(1000);
  /*
  //blink random LED
  int n = random(2,6);
  switch (n){
    case 2: digitalWrite(2, HIGH);
   delay(1000); 
   digitalWrite(2, LOW);
   delay(1000); 
    break;
    case 3: digitalWrite(3, HIGH);
   delay(1000); 
   digitalWrite(3, LOW);
   delay(1000); 
    break;
    case 4: digitalWrite(4, HIGH);
   delay(1000); 
   digitalWrite(4, LOW);
   delay(1000); 
    break;
    case 5: digitalWrite(5, HIGH);
   delay(1000); 
   digitalWrite(5, LOW);
   delay(1000); 
    break;
    case 6: digitalWrite(6, HIGH);
   delay(1000); 
   digitalWrite(6, LOW);
   delay(1000); 
    break;
  }

  //blink one LED
   digitalWrite(2, HIGH);
   delay(1000); 
   digitalWrite(2, LOW);
   delay(1000); 
   digitalWrite(2, HIGH);
   delay(1000); 
   digitalWrite(2, LOW);
   delay(1000); 
   digitalWrite(2, HIGH);
   delay(1000); 
   digitalWrite(2, LOW);
   delay(1000); 
   digitalWrite(2, HIGH);
   delay(1000); 
   digitalWrite(2, LOW);
   delay(1000); 
   digitalWrite(2, HIGH);
   delay(1000); 
   
   
  //blink sequentially
  digitalWrite(2, HIGH);
  delay(1000); 
   digitalWrite(3, HIGH);
  delay(1000); 
   digitalWrite(4, HIGH);
  delay(1000); 
   digitalWrite(5, HIGH);
  delay(1000); 
   digitalWrite(6, HIGH);
  delay(1000); 
  digitalWrite(2, LOW);
  delay(1000); 
   digitalWrite(3, LOW);
  delay(1000); 
   digitalWrite(4, LOW);
  delay(1000); 
   digitalWrite(5, LOW);
  delay(1000); 
   digitalWrite(6, LOW);
  delay(1000); */
  
}