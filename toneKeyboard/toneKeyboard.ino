#include "pitches.h"

const int buzzerPin = 8;
const int inPin = 9;  
int val;
int notes[] = {
  NOTE_A4, NOTE_B4, NOTE_C3,NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, NOTE_B3, NOTE_C4
};

void setup() {
  pinMode(inPin, INPUT);
}

void loop() {
   val = digitalRead(inPin);
   if(val>0){ 
    for (int i = 0; i < 10; i++) {
      tone(buzzerPin, notes[i], 500);
      delay(500);
    }
   }
}
