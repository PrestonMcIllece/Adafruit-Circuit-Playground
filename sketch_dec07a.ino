
//[sourcecode language = "cpp"]
//#include "pitches.h"
#include <Adafruit_Circuit_Playground.h>
#include <FastLED.h>
const int ledPin = 13;



void setup() {
  CircuitPlayground.begin();
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  uint16_t value, sound;
  
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);

  char read = Serial.read();

  if(read == 's') {
      value = CircuitPlayground.lightSensor();
      sound = map(value, 0, 1023, 131, 1760);
      CircuitPlayground.playTone(sound,100);
      
      CircuitPlayground.setPixelColor(0, 0, 0, 0);
      CircuitPlayground.setPixelColor(1, 0, 0, 0);
      CircuitPlayground.setPixelColor(2, 0, 0, 0);
      CircuitPlayground.setPixelColor(3, 0, 0, 0);
      CircuitPlayground.setPixelColor(4, 0, 0, 0);
      CircuitPlayground.setPixelColor(5, 0, 0, 0);
      CircuitPlayground.setPixelColor(6, 0, 0, 0);
      CircuitPlayground.setPixelColor(7, 0, 0, 0);
      CircuitPlayground.setPixelColor(8, 0, 0, 0);
      CircuitPlayground.setPixelColor(9, 0, 0, 0);
  }

  if(read == 'a') {
    CircuitPlayground.setPixelColor(0, 255, 0, 0);
    CircuitPlayground.setPixelColor(1, 255, 255, 0);
    CircuitPlayground.setPixelColor(2, 0, 255, 0);
    CircuitPlayground.setPixelColor(3, 0, 255, 255);
    CircuitPlayground.setPixelColor(4, 0, 0, 255);
    CircuitPlayground.setPixelColor(5, 255, 0, 255);
    CircuitPlayground.setPixelColor(6, 255, 255, 255);
    CircuitPlayground.setPixelColor(7, 148, 0, 211);
    CircuitPlayground.setPixelColor(8, 75, 0, 130);
    CircuitPlayground.setPixelColor(9, 255, 127, 0);
  }

  if(read == 'r') {
    CircuitPlayground.setPixelColor(0, 255, 0, 0);
    CircuitPlayground.setPixelColor(1, 255, 0, 0);
    CircuitPlayground.setPixelColor(2, 255, 0, 0);
    CircuitPlayground.setPixelColor(3, 255, 0, 0);
    CircuitPlayground.setPixelColor(4, 255, 0, 0);
    CircuitPlayground.setPixelColor(5, 255, 0, 0);
    CircuitPlayground.setPixelColor(6, 255, 0, 0);
    CircuitPlayground.setPixelColor(7, 255, 0, 0);
    CircuitPlayground.setPixelColor(8, 255, 0, 0);
    CircuitPlayground.setPixelColor(9, 255, 0, 0);    
  }

  if(read == 'g') {
    CircuitPlayground.setPixelColor(0, 0, 255, 0);
    CircuitPlayground.setPixelColor(1, 0, 255, 0);
    CircuitPlayground.setPixelColor(2, 0, 255, 0);
    CircuitPlayground.setPixelColor(3, 0, 255, 0);
    CircuitPlayground.setPixelColor(4, 0, 255, 0);
    CircuitPlayground.setPixelColor(5, 0, 255, 0);
    CircuitPlayground.setPixelColor(6, 0, 255, 0);
    CircuitPlayground.setPixelColor(7, 0, 255, 0);
    CircuitPlayground.setPixelColor(8, 0, 255, 0);
    CircuitPlayground.setPixelColor(9, 0, 255, 0);
  }

  if(read == 'b') {
    CircuitPlayground.setPixelColor(0, 0, 0, 255);
    CircuitPlayground.setPixelColor(1, 0, 0, 255);
    CircuitPlayground.setPixelColor(2, 0, 0, 255);
    CircuitPlayground.setPixelColor(3, 0, 0, 255);
    CircuitPlayground.setPixelColor(4, 0, 0, 255);
    CircuitPlayground.setPixelColor(5, 0, 0, 255);
    CircuitPlayground.setPixelColor(6, 0, 0, 255);
    CircuitPlayground.setPixelColor(7, 0, 0, 255);
    CircuitPlayground.setPixelColor(8, 0, 0, 255);
    CircuitPlayground.setPixelColor(9, 0, 0, 255);
  }
  
  if(Serial.available()) {
    //char a = Serial.read();
    //if (a == 'b'){
     // value = CircuitPlayground.lightSensor();
      //sound = map(value, 0, 1023, 131, 1760);
      //CircuitPlayground.playTone(sound,100);
    //}
    //light(Serial.read() - '0');
  }
  //delay(500);
}

void light(int n) {
  for (int i = 0; i < n; i++) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
//[/sourcecode]
