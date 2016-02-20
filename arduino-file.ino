// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!
 
#define REDPIN 9
#define GREENPIN 11
#define BLUEPIN 13
#define ORANGEPIN 12
#define PUPLEPIN
#define WHITEPIN 10
 
#define FADESPEED 5     // make this higher to slow down
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
  pinMode(ORANGEPIN, OUTPUT);
  pinMode(WHITEPIN, OUTPUT);
}
 
 
void loop() {
  int r, g, b;
  digitalWrite(BLUEPIN, HIGH);
  digitalWrite(ORANGEPIN, HIGH);
  digitalWrite(GREENPIN, HIGH);
  digitalWrite(WHITEPIN, HIGH);
  digitalWrite(REDPIN, HIGH);
}

