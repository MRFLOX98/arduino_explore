
void handle(){
  Serial.print("1");
}

void setup() {
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2),handle,CHANGE);
  Serial.begin(9600);
}

void loop() {
  
}
