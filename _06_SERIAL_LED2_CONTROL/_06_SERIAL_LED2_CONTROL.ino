/*
  Switch_LED-1
  Turns on an LED on/off by taking switch- digital Input.

 */

int led1 = D4;// DECLARE LED1 PIN NO. ON NODEMCU BOARD
int led2 = D5;// DECLARE LDE2 PIN NO. ON NODEMCU BOARD
int led3 = D7;// DECLARE LDE2 PIN NO. ON NODEMCU BOARD




// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);
  Serial.flush();
  // initialize digital input/output
  pinMode(led1, OUTPUT); // DECLARE LED1 , LED2 & LED3 AS OUTPUT
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  
  digitalWrite(led1, LOW);// KEEP BOTH LED IN OFF STATE
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  

}

// the loop function runs over and over again forever
void loop() {

String text="";
  while (Serial.available()>0)
  {  

  text += (char)Serial.read();
  delay(5);
  } 


  
  
      
  
 if(text == "LED1ON")
  {
    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
   
  }
  else if(text == "LED2ON")
  {
    digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
   
  }
  else if(text == "LED3ON")
  {
    digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
   
  }
   else if(text == "LED1OFF")
  {
    digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
   
  }
  else if(text == "LED2OFF")
  {
    digitalWrite(led2, LOW);   // turn the LED on (HIGH is the voltage level)
   
  }
  else if(text == "LED3OFF")
  {
    digitalWrite(led3, LOW);   // turn the LED on (HIGH is the voltage level)
   
  }
            
}
