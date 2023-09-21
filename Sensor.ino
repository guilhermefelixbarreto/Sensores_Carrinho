// Define os pinos dos sensores de linha

const int pinSensor1 = 7;

const int pinSensor2 = 3;



// Define os pinos dos motores

const int motorA_EN = 5;

const int motorA_DIR = 0;

const int motorB_EN = 4;

const int motorB_DIR = 2;



void setup() {

  Serial.begin(9600);



  // Configura os pinos dos sensores como entrada

  pinMode(pinSensor1, INPUT);

  pinMode(pinSensor2, INPUT);



  // Configura os pinos dos motores como saída

  pinMode(motorA_EN, OUTPUT);

  pinMode(motorA_DIR, OUTPUT);

  pinMode(motorB_EN, OUTPUT);

  pinMode(motorB_DIR, OUTPUT);



  // Inicializa os motores desligados

  desligarMotores();

}



void loop() {

  // Lê o estado dos sensores de linha

  bool estadoSensor1 = digitalRead(pinSensor1);

  bool estadoSensor2 = digitalRead(pinSensor2);



  // Verifica se pelo menos um dos sensores detecta preto

  if (estadoSensor1 || estadoSensor2) {

    // Pelo menos um sensor detecta preto, avance

    avancar();

  } else {

    // Nenhum dos sensores detecta preto, pare

    parar();

  }



  /

  delay(20);

}





void desligarMotores() {

  digitalWrite(motorA_EN, LOW);

  digitalWrite(motorB_EN, LOW);

}



// Frente

void avancar() {

  digitalWrite(motorA_EN, HIGH);

  digitalWrite(motorA_DIR, HIGH);

  digitalWrite(motorB_EN, HIGH);

  digitalWrite(motorB_DIR, HIGH);

}



// parar

void parar() {

  desligarMotores();

}



