#include <Arduino_SensorKit.h>
#include <Arduino_SensorKit_BMP280.h>
#include <Arduino_SensorKit_LIS3DHTR.h>


#include "Arduino_SensorKit.h"

const int buzzerPin = 2;
const int button = 4;
const int LED = 6;

void setup() {
  // put your setup code here,12 to run once:
  
  Serial.begin(9600);
  while (!Serial);

 
  pinMode(LED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(button , INPUT);

  digitalWrite(LED, LOW);
  digitalWrite(LED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if 
  
    (digitalRead(button)) {
    tone(buzzerPin,100);
    digitalWrite(LED, HIGH);
      Serial.println("----------- ALARM ACTIVATED -----------");
    
  } else {
    noTone(buzzerPin);
    digitalWrite(LED, LOW);
      Serial.println("ALARM DEACTIVATED");

  }
}
