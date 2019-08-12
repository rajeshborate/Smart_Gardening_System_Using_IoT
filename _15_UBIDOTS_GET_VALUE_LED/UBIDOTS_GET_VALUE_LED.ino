#include "UbidotsMicroESP8266.h"

#define ID  "595de9bd762542310acdd39c"  // Put here your Ubidots variable ID
#define ID2  "595e1204762542310acfe1ba"  // Put here your Ubidots variable ID
#define TOKEN  "nvE15lw25I6UZ3qY87pJwa3PQXawPq"  // Put here your Ubidots TOKEN
#define WIFISSID "Redmi" // Put here your Wi-Fi SSID
#define PASSWORD "12345678" // Put here your Wi-Fi password

Ubidots client(TOKEN);

void setup() {
    pinMode(D5,OUTPUT);
    digitalWrite(D5,LOW);
    pinMode(D7,OUTPUT);
    digitalWrite(D7,LOW);
    Serial.begin(9600);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
}

void loop() {
    int value = client.getValue(ID);
    int value2 = client.getValue(ID2);
    digitalWrite(D5,value);
    digitalWrite(D7,value2);
    Serial.print("Value: ");
    Serial.print(value);
    Serial.print("    Value2: ");
    Serial.println(value2);
    delay(100);
}

