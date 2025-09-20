/*
The given sensor is a  QRT 8RC reflectance sensor array
*/

#include <QTRSensors.h>
unsigned int sensorPins[8] = {2,3,4,5,6,7,8,9};
QTRSensorsRC sensors(sensorPins, 8);
unsigned int sensorValues[8];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensors.read(sensorValues);

  for (int i = 0; i < 8; i++)
  {
    Serial.print(sensorValues[i]);  
    if (i < 7) 
    {
      Serial.print("\t");
    } 
  }
  Serial.println();              

  delay(100);                   
}
