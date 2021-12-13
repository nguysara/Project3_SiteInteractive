#include <Arduino_SensorKit.h>
#include <Arduino_SensorKit_BMP280.h>
#include <Arduino_SensorKit_LIS3DHTR.h>

//set pin numbers

int ledPin = 6;
int buzzerPin = 2;
int potPin = A0;

void setup () {

  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {

  int potStatus = analogRead(potPin);  //read the state of the pot

  if (potStatus >= 100) {

   tone(buzzerPin,100);
    digitalWrite(ledPin, HIGH);
    delay(100);

    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(100);

    Serial.println("----------- ALARM ACTIVATED -----------"); 
  }

  if (potStatus >= 100) {
    
    
    tone(buzzerPin, 1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);

    
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(500);

    Serial.println("----------- ALARM ACTIVATED -----------"); 
  }
  else {

    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);

    Serial.println("ALARM DEACTIVATED");
  }
}
