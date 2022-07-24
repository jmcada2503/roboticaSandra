 

void loop() {
  // put your main code here, to run repeatedly:
  goForward(M1, M2);
  delay(2000);
  goReverse(M1, M2);
  delay(2000);
  motorSpeed(M1, 80);
  motorSpeed(M2, 80);
  goForward(M1, M2);
  delay(2000);
}
