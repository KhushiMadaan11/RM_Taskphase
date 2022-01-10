long dur;
int dis;
int trigPin=4;
int echoPin=3;
int m1=10;
int m2=11;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
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
  if(dis<10){
    digitalWrite(m1, LOW);
  }
  else{
    analogWrite(m1, dis);
  }
}
