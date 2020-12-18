//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 2
#define GREEN 3
#define RED 4

// fading time between colors
#define delayTime 10 

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    analogWrite(RED, 255);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
}

void fade(int fPin, int bPin) {
  for (int i = 0; i < 255; i++) {
    analogWrite(fPin, 255 - i);
    analogWrite(bPin, i);
    delay(delayTime);
  }
}

// main loop
void loop() {
  fade(RED, GREEN);
  fade(GREEN, BLUE);
  fade(BLUE, RED);
}
