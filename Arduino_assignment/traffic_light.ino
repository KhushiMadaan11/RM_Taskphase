int trafficlight = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  trafficlight = 1000;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(trafficlight); // Wait for trafficlight millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  trafficlight = 2000;
  delay(trafficlight); // Wait for trafficlight millisecond(s)
  digitalWrite(12, HIGH);
  delay(trafficlight); // Wait for trafficlight millisecond(s)
  digitalWrite(12, LOW);
  trafficlight = 3000;
  delay(trafficlight); // Wait for trafficlight millisecond(s)
  digitalWrite(11, HIGH);
  delay(trafficlight); // Wait for trafficlight millisecond(s)
  digitalWrite(11, LOW);

}
