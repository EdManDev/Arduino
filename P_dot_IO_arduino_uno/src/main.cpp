// #include <Arduino.h>

// void setup()
// {
//   // put your setup code here, to run once:
// }

// void loop()
// {
//   // put your main code here, to run repeatedly:
// }

// most of the libraries that we will need
#include <Wifi.h>
#include <WifiClient.h>
#include <DHT.h>
#include <BlynkSimpleEsp32.h>

#define DHPIN 23
#define DHTYPE DHT11

// decalaring some variables pins
const int relay = 22;
const int waterLevelSensor = 21;
const int Soil = 19;

// for incoming data, analog reading
int WaterLevelData;
int SoilLevelData;

// new object for DHT sensor
DHT dht(DHPIN, DHTYPE);

// for time multiple events on hardware
BlynkTimer timer;

// setup WIFI settings & Auth code
char auth[] = "Enter Your Auth Code";
char ssid[] = "Wifi SSID";
char pass[] = "Wifi Password";

// method for reading the soil sensor
void SendSensorDH()
{
  float hummidity = dht.readHumidity();
  float temperature = dht.readtemperature();

  Blynk.virtualWrite(V5, hummidity);
  Blynk.virtualWrite(V4, temperature);
}

// reading the soil sensor level
void SendSensorWaterSoil()
{
  waterLevel = analogRead(waterLevelSensor);
  waterLevel = map(waterLevel, 0, 2000, 0, 20);
  moistureLevel = analogRead(SoilSensor);
  moistureLevel = map(moistureLevel, 0, 4000, 0, 20);

  Blynk.virtualWrite(V7, waterLevel);
  Blynk.virtualWrite(V6, moistureLevel);
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(3000L, SendSensorDH);
  timer.setInterval(6000L, SendSensorWaterSoil);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();
}