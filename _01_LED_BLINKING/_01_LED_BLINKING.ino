/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

 */

int led1 = D4; // DECLARE LED1 PIN NO. ON NODEMCU BOARD



// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led1, OUTPUT);// DECLARE LED1 AS OUTPUT
  digitalWrite(led1, LOW);// KEEP LED1 IN OFF STATE

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000);              // wait for a second
  digitalWrite(led1, LOW);   // turn the LED off (LOW is the voltage level)
   delay(1000);              // wait for a second
}
