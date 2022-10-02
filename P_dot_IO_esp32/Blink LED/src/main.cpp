#include <Arduino.h>

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9 = 5;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH); // LED1
  delay(100);               // 100ms
  digitalWrite(LED2, HIGH); // LED2
  delay(100);               // 100ms
  digitalWrite(LED3, HIGH); // LED3
  delay(100);               // 100ms
  digitalWrite(LED1, LOW);  // LED1
  delay(100);               // 1000ms
  digitalWrite(LED2, LOW);  // LED2
  delay(100);               // 100ms
  digitalWrite(LED3, LOW);  // LED3
  delay(100);               // 100ms
                            // put your main code here, to run repeatedly:
  digitalWrite(LED4, HIGH); // LED1
  delay(100);               // 100ms
  digitalWrite(LED5, HIGH); // LED2
  delay(100);               // 100ms
  digitalWrite(LED6, HIGH); // LED3
  delay(100);               // 100ms
  digitalWrite(LED4, LOW);  // LED1
  delay(100);               // 1000ms
  digitalWrite(LED5, LOW);  // LED2
  delay(100);               // 100ms
  digitalWrite(LED6, LOW);  // LED3
  delay(100);               // 100ms
                            // put your main code here, to run repeatedly:
  digitalWrite(LED7, HIGH); // LED1
  delay(100);               // 100ms
  digitalWrite(LED8, HIGH); // LED2
  delay(100);               // 100ms
  digitalWrite(LED9, HIGH); // LED3
  delay(100);               // 100ms
  digitalWrite(LED7, LOW);  // LED1
  delay(100);               // 1000ms
  digitalWrite(LED8, LOW);  // LED2
  delay(100);               // 100ms
  digitalWrite(LED9, LOW);  // LED3
  delay(100);               // 100ms
}
