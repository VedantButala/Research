
const int led = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("Testing Arduino Uno");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(250);
  Serial.println("LED : ON");
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  Serial.println("LED : OFF");
  delay(250);
}
