
/* ESP32 WiFi Scanning example */

#include "WiFi.h"
#include "ArduinoMqttClient.h"

WiFiClient  client;
MqttClient mqttClient(client);

const char broker[] = "broker.hivemq.com";
int        port     = 1883;
const char topic[]  = "159002b230f6a7239a419fdf2c4fd0bf/bus2";
double lat=10.4628202;
double lon=77.5241427;
void setup() {
  Serial.begin(115200);
  
    delay(1000);

    WiFi.mode(WIFI_STA); //Optional
    WiFi.begin("Wokwi-GUEST", "");
    Serial.println("\nConnecting");

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }

    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());


      Serial.println("You're connected to the network");
  Serial.println();

  Serial.print("Attempting to connect to the MQTT broker: ");
  Serial.println(broker);

  if (!mqttClient.connect(broker, port)) {
    Serial.print("MQTT connection failed! Error code = ");
    Serial.println(mqttClient.connectError());

    while (1);
  }

  Serial.println("You're connected to the MQTT broker!");
  Serial.println();
}


void loop() {
   mqttClient.beginMessage(topic);
    mqttClient.print(lat);
    mqttClient.print(",");
    mqttClient.print(lon);
    mqttClient.endMessage();
  int randomNumber=1.0;
 lat=lat+randomNumber;
   lon=lon+randomNumber;
    delay(1000);
}