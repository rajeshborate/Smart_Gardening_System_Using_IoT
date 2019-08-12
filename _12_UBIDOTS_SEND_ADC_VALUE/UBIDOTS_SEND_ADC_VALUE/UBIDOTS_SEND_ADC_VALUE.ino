#include "UbidotsMicroESP8266.h"
#define TOKEN  "rkhr21o8WasneYuE3Mjb6fLT03IBtK"  // Put here your Ubidots TOKEN
#define WIFISSID "Redmi"
#define PASSWORD "12345678"

Ubidots client(TOKEN);

void setup(){
    Serial.begin(9600);
    delay(10);
    client.wifiConnection(WIFISSID, PASSWORD);
}
void loop(){
    float value = analogRead(A0);
    client.add("ADC", value);
    client.sendAll(true);
    delay(5000);
}
