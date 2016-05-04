#include <EmonLib.h>

EnergyMonitor energyMonitor;

void setup() {
    Serial.begin(9600);
    energyMonitor.current(1, 1800 / 62);
}

void loop() {
  Serial.print(millis());
  Serial.print(" ");

  double Irms = energyMonitor.calcIrms(1480);

  Serial.print(Irms * 230.0);
  Serial.print("W\t");
  Serial.println("");

  delay(10);
}


