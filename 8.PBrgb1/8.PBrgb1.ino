//Goal: PB not pressed: RGB white PB pressed: RGB off 

//Main theme: digital input/output 

 
void setup() { 


  //configure pin 2 as an input and pin 3,4,5 as a OUTPUT 
  pinMode(2, INPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 

} 

  
void loop() { 

  //read the pushbutton value into a variable 
  int sensorVal = digitalRead(2); 

    digitalWrite(3,sensorVal); 
    digitalWrite(4,sensorVal); 
    digitalWrite(5,sensorVal); 
    delay(10);

} 