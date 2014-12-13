/*
  Basic application trials.
 */
 
int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, LOW);

  int sensorValue = analogRead(A0);

  float voltage = sensorValue * (5.0 / 1023.0);
  
  Serial.print("V: ");
  Serial.print(voltage);
  Serial.println("--");
  delay(100);
}
