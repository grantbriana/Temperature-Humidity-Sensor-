#include "DHT.h"
#define DHTPIN D2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t*9/5+32);
  Serial.println(" *F");
  delay(1000*10);
}
