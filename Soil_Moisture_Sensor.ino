const int led1 = 2;
const int led2 = 3;
const int led3 = 4;

const int moistureSensor = A0;

void setup() {
  // Serial Begin so we can see the data from the mosture sensor in our serial input window. 
  Serial.begin(9600);

  // setting the led pins to outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
} 

void loop() {
  // read the input on analog pin 0:
  int value = analogRead(moistureSensor);
  
  // print out the value you read:
  Serial.print("sensor value = " );
  Serial.println(value);
  
  if (value >= 600)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if (value >= 400  && value < 600)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }    
  else if (value >= 300 && value < 400)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if (value >= 0 && value < 300)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  
  delay(1000);        // delay 1 second between reads
}
