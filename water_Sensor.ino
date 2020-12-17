//Define pins
const int s_pin = A0; //S pin on water sensor connected to AO pin on Arduino board
const int led = 13; //LED connected to pin 13 on the Arduino board

void setup()
{
  Serial.begin(9600);   //Begin serial communication
  pinMode(s_pin, INPUT);   //set s_pin as input
  pinMode(led, OUTPUT);   //ser led as output
}

void loop()
{
  Serial.println(analogRead(s_pin)); //send s_pin reading to serial monitor
  delay(100);  //delay 100 ms

  int value = analogRead(s_pin); //Read data from analog pin and store it to value variable
  if (value > 10 && value <= 400 ){ 
    Serial.println("Water reached the bottom of the sensor!");
    digitalWrite(led, HIGH);
  }
  else if (value > 400 && value <= 650 ){ 
    Serial.println("Water reached middle section of the sensor!");
    digitalWrite(led, HIGH);
  }
  else if (value > 650 ){ 
    Serial.println("Water reached top section of the sensor!");
    digitalWrite(led, HIGH);
  }
  else {
    Serial.println("Water not touching the sensor!");
    analogWrite(led, LOW); 
  }
}
