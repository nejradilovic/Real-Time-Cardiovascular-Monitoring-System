#include <PulseSensorPlayground.h>
const int pulsePin = A0;
PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(115200);

  pulseSensor.analogInput(pulsePin);
  pulseSensor.setThreshold(550);
  pulseSensor.begin();
  pulseSensor.setSerial(Serial);
}

void loop() {
  Serial.println(String(pulseSensor.getBeatsPerMinute()));
  delay(30*1000);
}