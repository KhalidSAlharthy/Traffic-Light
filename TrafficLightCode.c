
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, LOW);
  
  digitalWrite(3, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);

  
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
 
}