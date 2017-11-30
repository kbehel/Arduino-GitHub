#include <DHT.h>

#define DHTTYPE DHT11   // DHT 11

#define DHTPIN 7

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
