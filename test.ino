int sensorVal;
const int buttonPin = 2;
const int ledPin1 = 11;
const int ledPin2 = 9;
const int piezoPin = 8;

void setup() {
pinMode(sensorPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
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

