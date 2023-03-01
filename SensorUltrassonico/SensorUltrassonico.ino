const int echoPin = 7, triggerPin = 6;
long tempo;
float distancia;

void setup() {
  // put your setup code here, to run once:

  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//Garantir que o triggerPin não está a enviar nada
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);

//Gerar o ultrassom durante 10 microsegundos
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);

tempo = pulseIn(echoPin, HIGH);
distancia = tempo * 0.034 / 2;

Serial.print("Tempo: ");
Serial.print(tempo);
Serial.print("μs Distancia: ");
Serial.print(distancia);
Serial.println(" cm");
delay(1000);
}
