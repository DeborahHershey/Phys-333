/*
  7-Segment Display circling
  Where pins 13-8 are linked a-g to a 7 seg display
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(1);

  digitalWrite(12, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(1);

  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(11, LOW);
  delay(1);

  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
  delay(1);

  digitalWrite(9, HIGH);
  delay(10);
  digitalWrite(9, LOW);
  delay(1);

  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(1);

}
