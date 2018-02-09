
int inPinhi = 10;
int inPinlo = 11;
int led = 12;
int brightness = 0;
int fadeAmount = 10;
int val = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(inPinhi, INPUT);
  pinMode(inPinlo, INPUT);
}

void loop() {
  val = digitalRead(inPinhi);
  if (val > 0&&brightness < 255) {
    brightness = brightness + fadeAmount;
    analogWrite(led, brightness);
  } 
  val = digitalRead(inPinlo);
  if (val > 0&&brightness >0) {
    brightness = brightness - fadeAmount;
    analogWrite(led, brightness);
  }
  delay(500);
}
