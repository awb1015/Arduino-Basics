int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  //this is a comment
  if (switchState == LOW){
    //the button wasn't pressed
    digitalWrite(3, HIGH); //green LED
    digitalWrite(4, LOW); //red LED
    digitalWrite(5, LOW); //other red LED
  }
  else{ //the button is pressed
     digitalWrite(3, LOW); //green LED off
     digitalWrite(4, HIGH); //middle red LED on
     digitalWrite(5, LOW); // end red led off
  
      delay(250); //delay for a quarter of a second
      //LED toggle action
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(250); //wait again
  }
}

