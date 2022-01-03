// C++ code
//
int potval=0;


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  potval=digitalRead(A0);
  digitalWrite(13, potval);
  delay(100); // Wait for 1000 millisecond(s)
}
