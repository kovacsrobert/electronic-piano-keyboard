int led = 13;
int pianoKey1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  //pinMode(pianoKey1, INPUT);
}

void loop() {
  int pianoKey1Value = analogRead(pianoKey1);
  Serial.println(pianoKey1Value);
  if (pianoKey1Value < 500) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
