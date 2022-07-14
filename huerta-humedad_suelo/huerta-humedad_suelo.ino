#define BLYNK_TEMPLATE_ID "TMPLD8rFzi5L"
#define BLYNK_DEVICE_NAME "LabHuerta"
#define BLYNK_AUTH_TOKEN "HLzwUvuby7mXrleQpEZLs2pwfGyC2Hhd"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Auth Token in the Blynk App.
char auth[] = "TuPHAneNtlAVRLy9AnB-fAri30XjI2cD";

// Credenciales del WIFI
char ssid[] = "moto g(8)";
char pass[] = "12345679";

int sensorPin = 2;   // Este es el pin para el sensor
int sensorValue = 0;  // Variable que trae los datos del sensor

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(2, INPUT);
}

void loop()
{
  Blynk.run();
  sensorValue = digitalRead(sensorPin);
  if (sensorValue == 1) {
    Blynk.notify("I need water..");
  }

}
