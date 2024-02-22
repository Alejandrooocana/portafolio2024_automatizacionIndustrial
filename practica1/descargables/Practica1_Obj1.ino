void pulsos(int cantidad, int frec){
  for(int i=0;i<cantidad;i++){
    digitalWrite(8,HIGH);
    delay(1000/frec);
    digitalWrite(8,LOW);
    delay(1000/frec);
  }
}
 
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pulsos(20,1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
