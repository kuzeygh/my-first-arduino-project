/*
  Basic application trials.
 */
 
int led = 13;
int MAXVALUE = 400;
int volume;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  volume = analogRead(A1);
  
  Serial.print("Volume:");
  Serial.println(volume);
  delay(100);
  
  if(volume >= MAXVALUE){
    digitalWrite(led, HIGH); 
  }else{
    digitalWrite(led, LOW); 
  }
  
}
