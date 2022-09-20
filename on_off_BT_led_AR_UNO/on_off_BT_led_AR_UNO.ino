char Incoming_value = 01;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0){
    Incoming_value=Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");
    
    if(Incoming_value == '1'){
      digitalWrite(13, HIGH); 
    }
    if(Incoming_value == '0'){
      digitalWrite(13, LOW); 
    }
  }
}
