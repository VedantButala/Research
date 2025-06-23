
const int trigPin = 11;
const int echoPin = 12;
const int led = 13;
float duration, distance;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.println("\nUltrasonic Sensor");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW); 
	delayMicroseconds(2); 
	digitalWrite(trigPin, HIGH); 
	delayMicroseconds(10); 
	digitalWrite(trigPin, LOW); 

  duration = pulseIn(echoPin, HIGH); 
  distance = ((duration*(0.0343))/2); 

  Serial.println("\nDistance:\t"); 
	Serial.print(distance); 

  if(distance<=20)
  {
    digitalWrite(led, HIGH);
  }
  else if(distance>180)
  {
    digitalWrite(led, LOW); 
  }
  else
  {
    digitalWrite(led, LOW); 
    delay(100);
    digitalWrite(led, HIGH); 
    delay(100);
    digitalWrite(led, LOW); 
  }

  delay(500);
}
