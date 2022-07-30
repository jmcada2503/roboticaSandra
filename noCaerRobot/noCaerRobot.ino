#define leftMotor M3
#define rightMotor M1
#define leftSensor J2
#define rightSensor J1

void setup() {
  // put your setup code here, to run once:
  motorOn(leftMotor, FORWARD);
  motorOn(rightMotor, FORWARD);
  motorSpeed(leftMotor, 80);
  motorSpeed(rightMotor, 50);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("leftSensor: ");
  Serial.print(lineRead(leftSensor));
  Serial.print("    rightSensor: ");
  Serial.println(lineRead(rightSensor));
  goForward(leftMotor, rightMotor);
  if (lineRead(leftSensor) == 0 || lineRead(rightSensor) == 0) {
    goReverse(leftMotor, rightMotor);
    delay(500);
    turnRight(leftMotor, rightMotor);
    delay(300);
  }
}
