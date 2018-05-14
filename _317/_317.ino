int button1 = 1; // Button 1 on pin 1, etc.
int button2 = 2;
int button3 = 3;
int button4 = 4;
int button5 = 5;
int button6 = 6;
int button7 = 7;
int button8 = 8;
int button9 = 9;
int buttonstar = 10; //Asterisk on pin 10.
int button0 = 11; // Button zero is actually on pin 11.
int buttontag = 12; // Octothorpe on pin 12.  Buttontag sounds amusingly German.

void setup()
{
  
  
/*
This is for the keypad itself.
Noted for buttons 0-9 including * and # for the pins.
This registers each pin that the keypad is connected to as inputs, the rest can be used according to the pin's read.
*/

// Not yet defining ledPin as this is subject to change in the future.
//int ledPin = XX // LED connected to pin XX

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  pinMode(button9, INPUT);
  pinMode(buttonstar, INPUT);
  pinMode(button0, INPUT);
  pinMode(buttontag, INPUT);  // Don't bust my balls out of this being out of order numerically, I KNOW.
  
  
  
void loop() 
{
// I'll finish this bit later, but the point of this entire hobglobin of a section \/ is to say that [if button X is pressed, 
// light up an LED, if any other button is pressed, light up ANOTHER LED.  Simple, right?  Not for me on two hours of sleep, yeet



}
