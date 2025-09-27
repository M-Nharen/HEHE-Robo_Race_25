const char ENA = 5;
const char input1 = 4;
const char input2 = 3;
const char ENB = 10;
const char input3 = 9;
const char input4 = 8;

void setup() 
{
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
}

void loop() 
{
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  analogWrite(ENA, 255);

  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  analogWrite(ENB, 255);

  delay(10000); 

  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);

  delay(10000); 

  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  analogWrite(ENA, 255);

  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  analogWrite(ENB, 255);

  delay(10000);
}
