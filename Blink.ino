int arr[] = {6, 7, 8, 9, 10, 11, 12, 13};
void setup() {
  for (int i = 0; i < 8; i++)
  {
    pinMode(arr[i], OUTPUT);
  }
}
void loop() {
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(arr[i], HIGH);
    delay(200);
  }
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(arr[i], LOW);
    delay(200);
  }
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(arr[i], HIGH);
    delay(500);
    digitalWrite(arr[i], LOW);
  }
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(arr[7 - i], HIGH);
    delay(500);
    digitalWrite(arr[7 - i], LOW);
  }
  delay(500);
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(arr[i], HIGH);
    digitalWrite(arr[i+4], HIGH);
    delay(500);
    digitalWrite(arr[i], LOW);
    digitalWrite(arr[i+4], LOW);
  }
  delay(500);
}
