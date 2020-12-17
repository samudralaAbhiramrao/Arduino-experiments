//Define pins: 13 for LED and A0 for LDR
const int led = 13;
const int ldr = A0;

void setup () {
  pinMode(led, OUTPUT); //set led pin as output
  pinMode(ldr, INPUT);  //set ldr pin as input
}

void loop() {
  //Declare an integer variable ldrValue
  //read signal from ldr pin and store reading in ldrValue
  int ldrValue = analogRead(ldr);

  //reading range from 0 to 1023
  //if reading is less than 500 (DARK) turn on LED
  if (ldrValue <= 500) {
  digitalWrite(led, HIGH); 
  }
  //else (there is enough light in the room) LED is off
  else {  
    digitalWrite(led, LOW);
  }
}
