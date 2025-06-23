
const int IR_Pin = 12;
const int led = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR_Pin, INPUT);
  pinMode(led, OUTPUT);
  Serial.println("IR Sensor");
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(IR_Pin);
  if (val == LOW)
  {
    digitalWrite(led, HIGH);
    Serial.println("LED : ON");
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("LED : OFF");
  }
  delay(500);
}
