#include "UbidotsMicroESP8266.h"
#define ID  "5962084c7625424592d27bb3"  // Put here your Ubidots variable ID
#define TOKEN  "rkhr21o8WasneYuE3Mjb6fLT03IBtK"  // Put here your Ubidots TOKEN
#define WIFISSID "Redmi" // Put here your Wi-Fi SSID
#define PASSWORD "12345678" // Put here your Wi-Fi password

int old_val=0;
Ubidots client(TOKEN);

void setup() {
    pinMode(D5,OUTPUT);
    digitalWrite(D5,LOW);
    Serial.begin(9600);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
}

void loop() {
    int value = client.getValue(ID);
    
    digitalWrite(D5,value);
    Serial.print("Value: ");
    Serial.print(value);

    float value1 = analogRead(A0);
    if (value1 != old_val)
    {
    client.add("ADC", value1);
    client.sendAll(true);
    old_val = value1;
      }
    

    delay(100);
}

