const int sensor = 0;
const int cPin = 2;
const int fPin = 3;
int cVal = 0;
int fVal = 0;
int cState = 0;
int fState = 0;
void setup()
{
  Serial.begin(9600);
}
float getCelcius(){
  float vout = analogRead(sensor);
  vout = (vout * 500) / 1023;
  return vout;
}
float getFahrenheit(){
  return (getCelcius() * 1.8) + 32;
}
void loop()
{

  cVal = digitalRead(cPin);
  if (cVal > 0 && cState == 0) {
    Serial.print("DegreeC= ");
    Serial.println(getCelcius());
    cState = 1;
  }
  else if (cVal == 0) {
    cState = 0;
  }
  fVal = digitalRead(fPin);
  if (fVal > 0 && fState == 0) {
    Serial.print("Fahrenheit= ");
    Serial.println(getFahrenheit());
    fState = 1;
  }
  else if (fVal == 0) {
    fState = 0;
  }

}
