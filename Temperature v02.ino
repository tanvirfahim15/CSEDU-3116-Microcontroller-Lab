const int sensor = 0;
const int button = 2;
int state = 0;
int ltime = 1000;
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

  int bVal = digitalRead(button);
  if (bVal > 0) {
    state=1-state;
    delay(500);
  }
  if(millis()>ltime){
    if(state==0){
      Serial.print("DegreeC= ");
      Serial.println(getCelcius()); 
    }
    else{
      Serial.print("Fahrenheit= ");
      Serial.println(getFahrenheit());
    }
    ltime+=1000;
  }

}
