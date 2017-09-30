
#include "notes.h"

int led = LED_BUILTIN;
int pianoPin1 = 0;
int piezoPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pianoPin1, INPUT);
  pinMode(piezoPin, OUTPUT);
}

void loop() {
  int pianoKey1Value = analogRead(pianoPin1);
  Serial.println(pianoKey1Value);
  if (pianoKey1Value < 500) {
    digitalWrite(led, LOW);
    noTone(piezoPin);
  } else {
    digitalWrite(led, HIGH);
    tone(piezoPin, NOTE_C4);
  }
}
