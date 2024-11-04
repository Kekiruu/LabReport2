
void setup() { 
  // initialize digital pin 2,3,4,5 as an output. 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
} 

  

// the loop function runs over and over again forever 
void loop() { 
  digitalWrite(2, HIGH);//turns on the LED of pin2 and the rest of the led are off 
  digitalWrite(3, LOW);  
  digitalWrite(4, LOW);  
  digitalWrite(5, LOW); 
  delay(500);  // wait for half a second   

  digitalWrite(2, LOW);//turns on the LED of pin4 and the rest of the led are off 
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);  
  delay(500);   // wait for half a second
       
  digitalWrite(2, LOW);//turns on the LED of pin4 and the rest of the led are off 
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);  
  delay(500);   // wait for half a second 

  digitalWrite(2, LOW);//turns on the LED of pin5 and the rest of the led are off 
  digitalWrite(3, LOW);  
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);  
  delay(500);   // wait for half a second  

  digitalWrite(2, LOW);//turns on the LED of pin4 and the rest of the led are off 
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);  
  delay(500);   // wait for half a second 

  digitalWrite(2, LOW);//turns on the LED of pin3 and the rest of the led are off 
  digitalWrite(3, HIGH);  
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);  
  delay(500);   // wait for half a second                            

} 