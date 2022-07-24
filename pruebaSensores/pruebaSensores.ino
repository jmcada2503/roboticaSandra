void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("J1: ");
  Serial.print(lineRead(J1));
  Serial.print("    J2: ");
  Serial.print(lineRead(J2));
  Serial.print("    Ultrasound: ");
  Serial.println(ultrasoundRead(J6));
  delay(500);
}
