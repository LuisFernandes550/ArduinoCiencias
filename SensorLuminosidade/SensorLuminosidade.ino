const int ldrPin = A0, ledPin = 6;
int ldr, led;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {


  // read the input on analog pin 0:
  ldr = analogRead(ldrPin);
  // print out the value you read:
  if (ldr < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  led = map(ldr, 1, 1014, 255, 0);
  analogWrite(ledPin, led);
  Serial.print("Ldr: ");
  Serial.print(ldr);
  Serial.print(" Led: ");
  Serial.println(led);
  delay(1);  // delay in between reads for stability
}
