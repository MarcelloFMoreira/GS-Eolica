#include <Servo.h>
#include <ArduinoJson.h> 

#define ldrPin1 A0
#define ldrPin2 A1
#define ldrPin3 A2
#define servoPin 9

Servo meuServo;

int ldrValue1, ldrValue2, ldrValue3;

const int lowLightThreshold = 100; 

void setup() {
  meuServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  ldrValue1 = analogRead(ldrPin1);
  ldrValue2 = analogRead(ldrPin2);
  ldrValue3 = analogRead(ldrPin3);


  String luminosityMessage = "OK";
  if (ldrValue1 < lowLightThreshold && ldrValue2 < lowLightThreshold && ldrValue3 < lowLightThreshold) {
    luminosityMessage = "Baixa";
  }

  int servoPosition = 0;
  if (ldrValue1 > ldrValue2 && ldrValue1 > ldrValue3) {
    servoPosition = 0;
  } else if (ldrValue2 > ldrValue1 && ldrValue2 > ldrValue3) {
    servoPosition = 90;
  } else if (ldrValue3 > ldrValue1 && ldrValue3 > ldrValue2) {
    servoPosition = 180;
  }
  meuServo.write(servoPosition);


  StaticJsonDocument<200> doc; 
  doc["ldr1"] = ldrValue1;
  doc["ldr2"] = ldrValue2;
  doc["ldr3"] = ldrValue3;
  doc["luminosity"] = luminosityMessage;
  doc["servoPosition"] = servoPosition;


  serializeJson(doc, Serial);
  Serial.println(); 

  delay(3000);
}
