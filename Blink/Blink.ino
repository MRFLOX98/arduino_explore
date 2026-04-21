void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  for(int i=3;i<12;i++)
  {
    if(i==3||i==5||i==6||i==9||i==10||i==11)
    {
      digitalWrite(i, HIGH);  
      delay(150);                   
      digitalWrite(i, LOW);    
      delay(150);  
    }
   }
}
