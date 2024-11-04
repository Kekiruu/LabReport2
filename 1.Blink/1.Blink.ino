
//Goal: Making a LED BLINK 
//Main theme: Digital Output 

void setup() { 

  pinMode(2, OUTPUT); 
//to initialize the digital pin as a output 

} 

void loop() { 

  digitalWrite(2, HIGH);  // turn the LED on 
  delay(1000);                      // wait for a second 

  digitalWrite(2, LOW);   // turn the LED off 
  delay(1000);                      // wait for a second 

} 