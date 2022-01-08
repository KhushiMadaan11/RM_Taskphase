long dur;
int dis;
int trigPin=13;
int echoPin=12;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  dur = pulseIn(echoPin, HIGH);
  dis = dur * 0.034 / 2; 
  Serial.print("Distance: ");
  Serial.print(dis);
  Serial.println(" cm");
}
