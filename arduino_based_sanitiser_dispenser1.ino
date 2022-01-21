int cm = 0;
long readUltrasonicDistance(int triggerPin, int echoPin) {
pinMode(triggerPin, OUTPUT); // Clear the trigger digitalWrite(triggerPin, LOW); delayMicroseconds(2);
digitalWrite(triggerPin, HIGH); delayMicroseconds(10);
digitalWrite(triggerPin, LOW); pinMode(echoPin, INPUT); return pulseIn(echoPin, HIGH);
}
void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT); 
}
void loop() {
cm = 0.01723 * readUltrasonicDistance(8, 8); 
if (cm>280) { //strongest spray
//press down the spray 
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(4000);
//revert back to normal position 
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(4000);
}
else if (cm>200) { // strong spray
//press down the spray 
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(3000);
//revert back to normal position 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(3000);
}
else if (cm>100) { //medium spray
//press down the spray 
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(2000);
//revert back to normal position 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(2000);
}
else if (cm<=10) { //light spray
//press down the spray 
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(1000);
//revert back to normal position 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(1000);
}
//rest between spray 
delay(100);
}  