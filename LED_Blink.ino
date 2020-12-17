int led1 = 5;
int led2 = 6;
int led3 = 9;
  
void setup() {
  // put your setup code here, to run once

  //initialize digital pin LEDs as an output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
}
