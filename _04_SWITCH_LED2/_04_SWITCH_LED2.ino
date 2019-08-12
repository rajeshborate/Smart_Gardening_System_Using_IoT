/*
  Switch_LED-1
  Turns on an LED on/off by taking switch- digital Input.

 */

int led1 = D4;// DECLARE LED1 PIN NO. ON NODEMCU BOARD
int led2 = D5;// DECLARE LDE2 PIN NO. ON NODEMCU BOARD
int switch1 = D0; //DECLARE SWITCH1 PIN NO. ON NODEMCU BOARD



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital input/output
  pinMode(led1, OUTPUT); // DECLARE LED1 & LED2 AS OUTPUT
  pinMode(led2, OUTPUT);
  pinMode(switch1, INPUT); // DECLARE SWITCH AS INPUT
  
  digitalWrite(led1, LOW);// KEEP BOTH LED IN OFF STATE
  digitalWrite(led2, LOW);
  

}

// the loop function runs over and over again forever
void loop() {
  int sw_status = digitalRead(switch1); // READ SWITCH STATUS AND STORE TO LOCAL VARIABLE
  if (sw_status == HIGH) // IF SWITCH PRESSED (3.3V)
  {
    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(led2, LOW);   // turn the LED off (LOW is the voltage level)
  }
  else
  {
    digitalWrite(led1, LOW);   // turn the LED off (LOW is the voltage level)
    digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
               
}
