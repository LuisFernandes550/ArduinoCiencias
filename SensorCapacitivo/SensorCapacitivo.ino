const int ledPin = 13, sensorPin = 2;
int sensor;

void setup() {
  pinMode(ledPin, OUTPUT);    // Set ledPin to output mode
  pinMode(sensorPin, INPUT);  //Set touch sensor pin to input mode
  Serial.begin(9600);
}

void loop() {

  sensor = digitalRead(sensorPin);
  Serial.print("Sensor: ");
  Serial.println(sensor);
  if (sensor == HIGH) {          //Read Touch sensor signal
    digitalWrite(ledPin, HIGH);  // if Touch sensor is HIGH, then turn on
  } else {
    digitalWrite(ledPin, LOW);  // if Touch sensor is LOW, then turn off the led
  }
}