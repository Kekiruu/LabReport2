
void setup() { 


  //start serial connection 
  Serial.begin(9600); 

  //configure pin 3 as an input and enable the internal pull-up resistor 
  pinMode(3, INPUT_PULLUP); 

} 

  

void loop() { 
  //read the pushbutton value into a variable 
  int sensorVal = !digitalRead(3); 

  //print out the value of the pushbutton 
  Serial.print("Button State = "); 
  Serial.println(sensorVal); 

} 