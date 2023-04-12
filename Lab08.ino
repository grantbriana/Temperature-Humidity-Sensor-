//Simple program for the implementation of a Temperature & Humidity Sensor utilizing Arduino & ESP32 with DHT11/DHT22
#include "DHT.h"
#define DHTPIN D2 //Temp. sensor
#define DHTTYPE DHT11 //Humidity sensor
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Used for communication between the Arduino board and a computer or other devices.
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();  //Reads Humidity
  float t = dht.readTemperature();  //Reads temperature

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t*9/5+32);
  Serial.println(" *F");
  delay(1000*10);
}
