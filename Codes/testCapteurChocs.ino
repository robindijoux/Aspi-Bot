void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("2 : ");
  Serial.print(digitalRead(2));
  Serial.print("     3 : ");
  Serial.println(digitalRead(3));
}
