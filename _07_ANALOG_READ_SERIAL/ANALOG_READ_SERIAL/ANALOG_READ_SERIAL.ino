int sensorvalue;
int outputvalue;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorvalue = analogRead(A0);
  // map it to the range of the analog out:
  outputvalue = map(sensorvalue, 0, 1023, 0, 255);
  

  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.print(sensorvalue);
  Serial.print("\t output = ");
  Serial.println(outputvalue);

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(2);
}
