#include<dht.h>
dht dht11;

// define the DHT pin
const int dht_pin = 5;

void setup() {
  Serial.begin(9600); 
}

void loop() { 
  
  dht11.read11(dht_pin); 
  Serial.print("Humidity = "); 
  Serial.println(dht11.humidity); 

  //Temparature in Celsius
  Serial.print("Temparature in Celsius = "); 
  Serial.println(dht11.temperature);

  //Temparature in Fahrenheit
  //T(°F) = T(°C) × 9/5 + 32
  Serial.print("Temparature in Fahrenheit = ");
  Serial.println((dht11.temperature * 9/5) + 32);
  
  delay(2000);
}
