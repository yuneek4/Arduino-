/* Create a global variable to hold the state of the switch. Name it switchState and set it to  0;  */
int switchstate = 0;
 int led1=3;
int led2=4;
 int led3=5;
 int button=2;
 
void setup() {
  // declare the LED pins as outputs using the pinMode() function
 //set the LEDs as OUTPUT on pins: 3,4, and 5 and the button as input on pin 2  - code it- 
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(button, INPUT);
}

void loop() {
  // read the value of the switch
  // digitalRead() checks to see if there is voltage
  // on the pin or not
  switchstate = digitalRead(2);

  // if the button is not pressed
  // turn on the green LED and off the red LEDs  
  if (switchstate == LOW) {

    digitalWrite(3, HIGH); // turn on the green LED on pin 3 
    digitalWrite(4, LOW);  // turn off the red LED on pin 4
    digitalWrite(5, LOW);  // turn off the red LED on pin 5
  }

  else {
    digitalWrite(3, LOW);  // turn off the green LED on pin 3
    digitalWrite(4, LOW);  // turn off the red LED on pin 4
    digitalWrite(5, HIGH); // turn on  the red LED on pin 5 

    // wait for a quarter second before changing the light

    delay(250);
    digitalWrite(4, HIGH); // turn on the red LED on pin 4 
    digitalWrite(5, LOW);  // turn off the red LED on pin 5

    // wait for a quarter second before changing the light
    delay(250);
  }
}
