#define red_led 8

void setup() {
  pinMode(red_led,OUTPUT);

}

void loop() {
  digitalWrite(red_led,HIGH);
  delay(500);
  digitalWrite(red_led,LOW);
  delay(500);

}
