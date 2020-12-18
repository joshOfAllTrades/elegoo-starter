// Josh
// 11/29/2020
/*****************************************/
const int pin = 13; // the switch pin

void setup() { 
  pinMode(LED_BUILTIN, OUTPUT); //initialize the ledPin as an output
  pinMode(pin, INPUT);
  digitalWrite(pin, HIGH);
} 

void loop()  {  
  int digitalVal = digitalRead(pin);
  if(HIGH == digitalVal) {
    digitalWrite(LED_BUILTIN, LOW); //turn the led off
  } else {
    digitalWrite(LED_BUILTIN, HIGH); //turn the led on 
  }
}
