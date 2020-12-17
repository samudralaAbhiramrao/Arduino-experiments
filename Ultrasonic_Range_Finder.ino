// declare names for digital pins 9 and 10
const int trig = 9;
const int echo = 10;

//variables
long time_travelled; //holds sound travel travvled - from and back to the rang finder
int distance; //the distance of an object from the range finder

void setup() {
pinMode(trig, OUTPUT); // Set trig pin as an Output
pinMode(echo, INPUT); // Set echo pin as an Input
Serial.begin(9600); // Starts the serial communication monitor
}

void loop() {
// turn off (LOW) trig pin for 2 ms
digitalWrite(trig, LOW);
delayMicroseconds(2);

// turn on (HIGH) trig pin 10 micro seconds then turn off (LOW)
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);

// store the reading (micro seconds) from echo pin in variable duration
time_travelled = pulseIn(echo, HIGH);

// sound speed is approx. 340 m/s
// distance is half of time travelled (i.e. one way) times speed 
distance = (time_travelled/2)*0.034;

// Print distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
