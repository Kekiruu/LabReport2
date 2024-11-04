//Goal: Making a LED light Chaser go back and forward 

//Main theme: Digital Output,RGB 

void setup() { 

  // initialize digital pin 2,3,4,5 as an output. 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 


} 


// the loop function runs over and over again forever 

void loop() { 

  digitalWrite(2, HIGH);//turns the RGB red 
  digitalWrite(3, LOW);  
  digitalWrite(4, LOW);  
  delay(500);  // wait for half a second                      

  digitalWrite(2, LOW);//turns the RGB green 
  digitalWrite(3, HIGH);  
  digitalWrite(4, LOW); 
  delay(500);   // wait for half a second     

  digitalWrite(2, LOW);//turns the RGB blue 
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH); 
  delay(500);   // wait for half a second    

  digitalWrite(2, HIGH);//turns the RGB magenta 
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH); 
  delay(500);   // wait for half a second    

  digitalWrite(2, HIGH);//turns the RGB yellow 
  digitalWrite(3, HIGH);  
  digitalWrite(4, LOW); 
  delay(500);   // wait for half a second    

  digitalWrite(2, LOW);//turns the RGB cyan 
  digitalWrite(3, HIGH);  
  digitalWrite(4, HIGH); 
  delay(500);   // wait for half a second    

  digitalWrite(2, HIGH);//turns the RGB white 
  digitalWrite(3, HIGH);  
  digitalWrite(4, HIGH); 
  delay(500);   // wait for half a second   

  

} 