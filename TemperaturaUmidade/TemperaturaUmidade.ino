#include <DHT.h>

#define DHTPIN D1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(void)
{
  Serial.begin(115200);
  dht.begin();
}


void loop()
{  
  float temperatura = 0.0;
  float umidade = 0.0;
  temperatura = dht.readTemperature();
  umidade = dht.readHumidity();
  
  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  Serial.print("Umidade: ");
  Serial.println(umidade); 
  
  delay(3000);
}
