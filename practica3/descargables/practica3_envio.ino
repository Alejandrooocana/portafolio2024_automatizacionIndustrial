int pot=0;
int bit=0;
int arreglo[]={0,0,0,0,0,0,0,0,0};


void setup()
{
  delay(2000);
  pinMode(2, OUTPUT); //Bit0
  Serial.begin(9600);
}

void loop()
{
  arreglo[0]=HIGH;
  
  pot=analogRead(A5);

  //Serial.println(pot);

  pot=map(pot,0,1023,0,255);
  Serial.println("");
  Serial.println(pot);
  
  for(int i=0; i<8; i++)
  {
    //digitalWrite(i+2,pot%2);

    bit=pot%2;
    //Serial.print(bit);
    pot=pot/2;
    arreglo[8-i]=bit;
  }
  //Serial.println("");
  digitalWrite(2,arreglo[0]);
  delay(300);
  digitalWrite(2,arreglo[1]); //bit0
  delay(300);
  digitalWrite(2,arreglo[2]); //bit0
  delay(300);
  digitalWrite(2,arreglo[3]); //bit0
  delay(300);
  digitalWrite(2,arreglo[4]); //bit0
  delay(300);
  digitalWrite(2,arreglo[5]); //bit0
  delay(300);
  digitalWrite(2,arreglo[6]); //bit0
  delay(300);
  digitalWrite(2,arreglo[7]); //bit0
  delay(300);
  digitalWrite(2,arreglo[8]); //bit0
  delay(300);
  
  for(int i=0; i<9; i++)
  {
    

    Serial.print(arreglo[i]);

  }
  Serial.println("");


  delay(1000);
}