int m1= 11;
int m2= 10;

void setup(){
 pinMode(m1, OUTPUT);
 pinMode(m2, OUTPUT);
}
void loop() {
 for(int motorValue = 0 ; motorValue <= 255; motorValue +=5){
 analogWrite(m1, motorValue); 
 delay(2);      
 }
 for(int motorValue = 255 ; motorValue >= 0; motorValue -=5){
 analogWrite(m1, motorValue); 
 delay(2);      
 }
}
