#include <Servo.h>

const int ledPin = 9;
const int servoPin = 6;

Servo maskServo;

void setup() {
  pinMode(ledPin, OUTPUT);
  maskServo.attach(servoPin);
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn on LEDs
  maskServo.write(0);         // mask closed
  delay(2000);

  digitalWrite(ledPin, LOW);  // turn off LEDs
  maskServo.write(90);        // mask opens
  delay(2000);
}
