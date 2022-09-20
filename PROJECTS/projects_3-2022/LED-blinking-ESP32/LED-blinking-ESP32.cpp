#include <Arduino.h>

const int LEDPIN = 22;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LEDPIN, HIGH);
  delay(1000);
  digitalWrite(LEDPIN, LOW);
  delay(1000);
}
