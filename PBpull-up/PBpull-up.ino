void setup() { 
  //start serial connection 
  Serial.begin(9600); 

  //configure pin 4 as an input  
  pinMode(4, INPUT); 

} 

void loop() { 

  //read the pushbutton value into a variable 
  int sensorVal = digitalRead(4); 

  //print out the value of the pushbutton 
  Serial.print("Button State = "); 
  Serial.println(sensorVal); 

} 