#define Red_led 8

void setup() {
  pinMode(Red_led,OUTPUT);

}

void loop() {
  digitalWrite(red_led,HIGH);
  delay(500);
  digitalWrite(red_led,LOW);
  delay(500);

}
