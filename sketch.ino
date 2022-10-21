//https://wokwi.com/projects/345893130820649554

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  Serial.begin(10000);
}
int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
  int readValue = analogRead(A0);
  digitalWrite(12, HIGH);
  delay(readValue);
  digitalWrite(12, LOW);
  delay(readValue);

  i++;
  Serial.print("Number of blinks:");
  Serial.println(i);

}
