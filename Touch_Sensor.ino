//Define pins
const int sig_pin = 2; //S pin on water sensor connected to AO pin on Arduino board
const int led = 13; //LED connected to pin 13 on the Arduino board

void setup()
{
  pinMode(sig_pin, INPUT);   //set sig_pin as input
  pinMode(led, OUTPUT);   //ser led as output
}

void loop()
{
  if (digitalRead(sig_pin)){ 
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW); 
  }
}
