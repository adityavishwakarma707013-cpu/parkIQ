#define BLYNK_TEMPLATE_ID "TMPL1234"
#define BLYNK_TEMPLATE_NAME "SmartHome"
#define BLYNK_AUTH_TOKEN "1QnWy8Ro-pt7_dkqSIV3okDlaQNm-Aa5"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "ADITYA";
char pass[] = "12345678";

#define RELAY 26

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if(value == 1)
  {
    digitalWrite(RELAY, LOW);   // Relay ON
  }
  else
  {
    digitalWrite(RELAY, HIGH);  // Relay OFF
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY, OUTPUT);

  digitalWrite(RELAY, HIGH);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}