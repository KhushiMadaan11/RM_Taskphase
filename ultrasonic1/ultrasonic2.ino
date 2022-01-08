long dur;
int dis;
int trigPin=4;
int echoPin=3;
int ledPin=13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  dur = pulseIn(echoPin, HIGH);
  dis = dur * 0.034 / 2; 
  if(dis>=15 and dis<=50){
     digitalWrite(ledPin, HIGH);
  }
  else{
     digitalWrite(ledPin, LOW);
  }
}

