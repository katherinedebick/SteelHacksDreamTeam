// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!
 
#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 13
#define ORANGEPIN 12
#define PUPLEPIN
#define WHITEPIN
 
#define FADESPEED 5     // make this higher to slow down
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}
 
 
void loop() {
  int r, g, b;
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);

}
