#include <QTRSensors.h>

QTRSensors qtr;

void setup()
{
  qtr.setTypeRC();
  qtr.setSensorPins((const uint8_t[]){A0, A1, A2}, 3);

  for (int i = 0; i < 250; i++)
  {
    qtr.calibrate();
    delay(10);  
  }
      
}

