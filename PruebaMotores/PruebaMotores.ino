void setup() {
  // put your setup code here, to run once:
  motorOn(M1, FORWARD);
  motorOn(M2, FORWARD);
}

void loop() {
  // put your main code here, to run repeatedly:
  goForward(M1, M2);
  delay(2000);
  goReverse(M1, M2);
  delay(2000);
  motorSpeed(M1, 50);
  motorSpeed(M2, 50);
  goForward(M1, M2);
  delay(2000);
}
