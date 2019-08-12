int sensorvalue;

int led1=D4;
int led2=D5;
int led3=D7;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  
}

void loop() {
  // read the analog in value:
  sensorvalue = analogRead(A0);
  
  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.println(sensorvalue);
if ((sensorvalue>0) &(sensorvalue<255))
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  }
else if ((sensorvalue>255) &(sensorvalue<500))
{
  digitalWrite(led2,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led3,LOW);
  }
else if ((sensorvalue>500) &(sensorvalue<1023))
{
  digitalWrite(led3,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  }
else 
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  }
  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(2);
}
