/*
  Switch_LED-1
  Turns on an LED on/off by taking switch- digital Input.

 */

int led1 = D2;// DECLARE LED1 PIN NO. ON NODEMCU BOARD
int switch1 = D0; //DECLARE SWITCH1 PIN NO. ON NODEMCU BOARD


// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital input/output
  pinMode(led1, OUTPUT);// DECLARE LED1 AS OUTPUT
  pinMode(switch1, INPUT);// DECLARE SWITCH AS INPUT
  
  digitalWrite(led1, LOW);// KEEP LED IN OFF STATE
  

}

// the loop function runs over and over again forever
void loop() {
  int sw_status = digitalRead(switch1);// READ SWITCH STATUS AND STORE TO LOCAL VARIABLE
  
  if (sw_status == HIGH)// IF SWITCH PRESSED (3.3V)
  {
    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println("Switch:HIGH");
  }
  else
  {
    digitalWrite(led1, LOW);   // turn the LED off (LOW is the voltage level)
    Serial.println("Switch:LOW");
  }
               
}
