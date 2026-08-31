int pir = 7;
int led = 3;

void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int movimento = digitalRead(pir);

  if (movimento == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}
