#include "UbidotsMicroESP8266.h"

#define ID  "5900774c7625427ca44b6f50"  // Put here your Ubidots variable ID
#define TOKEN  "nvE15lw25I6UZ3qY87pJwa3PQXawPq"  // Put here your Ubidots TOKEN
#define WIFISSID "Redmi" // Put here your Wi-Fi SSID
#define PASSWORD "12345678" // Put here your Wi-Fi password

Ubidots client(TOKEN);

void setup() {
    pinMode(D5,OUTPUT);
    digitalWrite(D5,LOW);
    Serial.begin(9600);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
}

void loop() {
    float value = client.getValue(ID);
    
    analogWrite(D5,value);
    Serial.print("Value: ");
    Serial.print(value);

    delay(100);
}

