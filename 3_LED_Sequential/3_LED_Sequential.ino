int LED1 = 13; // GPIO 13, 
int LED2 = 12; // GPIO 12, 
int LED3 = 14; // GPIO 11 before, 
 
void setup() {
  // put your setup code here, to run once: 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH); // LED1
  delay(200);               // 200ms
  digitalWrite(LED2, HIGH); // LED2
  delay(200);               // 200ms
  digitalWrite(LED3, HIGH); // LED3
  delay(200);               // 200ms
  digitalWrite(LED1, LOW);  // LED1
  delay(300);               // 300ms
  digitalWrite(LED2, LOW);  // LED2
  delay(300);               // 300ms
  digitalWrite(LED3, LOW);  // LED3
  delay(300);               // 300ms
}
