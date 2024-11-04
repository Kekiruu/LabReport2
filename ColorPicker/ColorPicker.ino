void setup() { 

  //configure d pin 3,4,5 as a OUTPUT 

  
  pinMode(3, OUTPUT);//red 
  pinMode(4, OUTPUT);//green 
  pinMode(5, OUTPUT);//blue 

} 


void loop() { 


//go on google doc or anything to to find the rgb color you want 

    analogWrite(3,100);//input the number that between 0-255 for red 
    analogWrite(4,200);//input the number that between 0-255 for green 
    analogWrite(5,50);//input the number that between 0-255 for blue 
} 