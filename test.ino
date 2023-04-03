int sensorVal;
const int buttonPin = 2;
const int ledPin1 = 11;
const int ledPin2 = 9;
const int piezoPin = 8;

#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35

int melody[] = {
  NOTE_B0, NOTE_C1, NOTE_CS
};

int noteDurations[] = {
  4, 4, 4
};


void setup() {
pinMode(sensorPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
  
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(8);
  }
}

void loop() {
sensorVal = digitalRead(sensorPin);
Serial.println(sensorVal);
if(sensorVal == HIGH) {
  digitalWrite(ledPin, HIGH);
} else {
digitalWrite(ledPin, LOW)
}
}

