/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

 */

int led1 = D4;// DECLARE LED1 PIN NO. ON NODEMCU BOARD
int led2 = D5;// DECLARE LDE2 PIN NO. ON NODEMCU BOARD


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led1, OUTPUT); // DECLARE LED1 & LED2 AS OUTPUT
  pinMode(led2, OUTPUT);
  digitalWrite(led1, LOW);// KEEP BOTH LED IN OFF STATE
  digitalWrite(led2, LOW);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);     // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  digitalWrite(led1, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
}
