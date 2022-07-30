# define leftSensor J1
# define rightSensor J2
# define ultra J6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("J1: ");
  Serial.print(lineRead(leftSensor));
  Serial.print("    J2: ");
  Serial.print(lineRead(rightSensor));
  Serial.print("    Ultrasound: ");
  Serial.println(ultrasoundRead(ultra));
  delay(500);
}
