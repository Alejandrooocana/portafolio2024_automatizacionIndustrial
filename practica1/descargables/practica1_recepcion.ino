int cuenta = 0;
void contar_pulsos(){

  if(digitalRead(8)==HIGH)
  {
    while(digitalRead(8)==HIGH);
    cuenta++;
    Serial.println(cuenta);
  }
  
  
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  contar_pulsos();
}
