//RECIBE POTENCIOMETRO

int bit[8];  
int suma=0;
int potencia=1;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}
bool band = false;
void loop()
{
  while (digitalRead(2) == LOW){
  }
      delay(300);
      
        //   for(int i=8; i>0; i--)
  	    // {          
        //   bit=digitalRead(2);
        //   Serial.print(bit);
        //   //Serial.println(potencia);
        //   suma=suma +(bit*potencia);
        //   //Serial.println(suma);
        //   potencia=potencia*2;
        //   delay(300);   
        // }
        for(int i=0; i<8; i++){
            bit[i]=digitalRead(2);
            delay(300);
        }
        for(int i=0; i<8; i++){
            suma |=bit[i] << (7-i);
            Serial.print(bit[i]);
        }

        Serial.println("");
        //suma+=suma;
      Serial.println(suma);
    
  
  suma=0;
  potencia=1;
  //delay(1000);
}