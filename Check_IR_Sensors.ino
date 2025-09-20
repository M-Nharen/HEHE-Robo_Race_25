const int sensor1 = 2;
const int sensor2 = 3;

void setup() 
{
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  Serial.begin(9600);
}

void loop() 
{ 
  int input1 = digitalRead(sensor1);
  int input2 = digitalRead(sensor2);

  if (input1 == HIGH)
  {
    Serial.print("HIGH");
  }
  else
  {
    Serial.print("LOW");
  }
  if (input2 == HIGH)
  {
    Serial.println("HIGH");
  }
  else
  {
    Serial.println("LOW");
  }

  delay(500);

}
