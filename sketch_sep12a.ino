 //direito
 const int pinSensor1 = 13;
 //esquerdo
 const int pinSensor2 = 12;

void setup(){
  Serial.begin(9600);

   pinMode(pinSensor1, INPUT);
  pinMode(pinSensor2, INPUT);
    
}

void loop(){
    bool estadoSensor1 = digitalRead(pinSensor1);
    bool estadoSensor2 = digitalRead(pinSensor2);
    if(estadoSensor1 || estadoSensor2 ){
        Serial.println("PRETO");
        delay(2000);
        }else{
            Serial.println("BRANCO (diferente de preto)");
            delay(2000);
    }
}
