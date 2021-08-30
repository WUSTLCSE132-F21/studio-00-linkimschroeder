int n;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  n = 0;
}

void loop() {
  Serial.print(n);
  Serial.println(" sec have elapsed");
  delay(1000);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  n++;
  Serial.println(millis());
}
