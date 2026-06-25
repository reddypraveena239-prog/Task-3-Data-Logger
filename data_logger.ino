#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const int lightPin = A0;

int sampleNumber = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();

  // CSV Header
  Serial.println("Sample,Temperature_C,Light_Value");
}

void loop() {

  float temperature = dht.readTemperature();

  int lightValue = analogRead(lightPin);

  sampleNumber++;

  // CSV Format Output
  Serial.print(sampleNumber);
  Serial.print(",");

  Serial.print(temperature);
  Serial.print(",");

  Serial.println(lightValue);

  delay(1000); // 1 sample per second
}