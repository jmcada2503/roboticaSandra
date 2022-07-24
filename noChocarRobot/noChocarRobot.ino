#define ultra J6
#define leftMotor M3
#define rightMotor M1

void setup() {
  // put your setup code here, to run once:
  motorOn(M1, FORWARD);
  motorOn(M2, FORWARD);
}

void loop() {
  // put your main code here, to run repeatedly:
  goForward(leftMotor, rightMotor);
  if (ultrasoundRead(ultra) < 15) {
    goReverse(leftMotor, rightMotor);
    delay(500);
    turnRight(leftMotor, rightMotor);
    delay(300);
  }
}
