const int rightForward = 2;
const int rightBackward = 3;
const int leftForward = 4;
const int leftBackward = 5;

void setup() {
pinMode(rightForward , OUTPUT);
pinMode(rightBackward , OUTPUT);
pinMode(leftForward , OUTPUT);
pinMode(leftBackward , OUTPUT);
}


void loop() {
//forward*forward
digitalWrite(rightForward , HIGH);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , HIGH);
digitalWrite(leftBackward , LOW);

delay(2000);

//forward*stationary
digitalWrite(rightForward , HIGH);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , LOW);

delay(2000);

//forward*backward
digitalWrite(rightForward , HIGH);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , HIGH);

delay(2000);

//stationary*Forward
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , HIGH);
digitalWrite(leftBackward , LOW);

delay(2000);

//stationary*stationary
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , LOW);

delay(2000);

//stationary*backward
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , LOW);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , HIGH);

delay(2000);

//backward*forward
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , HIGH);
digitalWrite(leftForward , HIGH);
digitalWrite(leftBackward , LOW);

delay(2000);

//backward*stationary
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , HIGH);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , LOW);

delay(2000);

//backward*backward
digitalWrite(rightForward , LOW);
digitalWrite(rightBackward , HIGH);
digitalWrite(leftForward , LOW);
digitalWrite(leftBackward , HIGH);
}
