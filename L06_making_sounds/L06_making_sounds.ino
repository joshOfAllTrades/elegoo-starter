// Josh
// 11/28/2020

int P_BUZZER = 11;

void setup() {
  pinMode(P_BUZZER, OUTPUT);
}

void oscilate(int ms) {
  digitalWrite(P_BUZZER, HIGH);
  delay(ms);
  digitalWrite(P_BUZZER, LOW);
  delay(ms);
}

void loop() {
  for (int i = 0; i < 80; i++) {
    oscilate(1);
  }

  for (int i = 0; i < 100; i++) {
    oscilate(2);
  }
} 
