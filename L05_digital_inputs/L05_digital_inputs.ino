// Josh
// 11/28/2020

int ledPin = 8;
int buttonApin = 2;
int buttonBpin = 3;

byte leds = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() {
  if (digitalRead(buttonApin) == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  
  if (digitalRead(buttonBpin) == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
