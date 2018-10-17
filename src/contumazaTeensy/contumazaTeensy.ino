//contumazaTeensy
//by Aaron Montoya-Moraga
//programmed on Arduino 1.8.7 IDE
//on a Macbook Air running macOSC 10.14

//define pins for mode switches
int modeLeftPin = 2;
int modeRightPin = 3;

//declare int variables for knob values
int knobLeft;
int knobRight;
int knobCenter;

//declare int variables for mode switches
int modeLeft;
int modeRight;

//declare variable for currentMode
int currentMode;

void setup() {

  //begin serial communication

  //declare midi mode for teensy

}

void loop() {

  //read knobs
  //TODO: filter noise?
  readKnobs();

  //read mode
  //TODO: optimize to only do this when the buttons switch?
  readMode();

  //

}

//function for reading knobs
void readKnobs() {
  knobLeft = analogRead(A0);
  knobRight = analogRead(A1);
  knobCenter = analogRead(A2);
}

//function for reading mode
void readMode() {
  
  //read switches
  modeLeft = digitalRead(modeLeftPin);
  modeRight = digitalRead(modeRightPin);

  //update currentMode
  //mode0, left off right off
  //mode1, left off right on
  //mode2, left on  right off
  //mode3, left on  right on
  if (modeLeft == 0 && modeRight == 0 ) {
    currentMode = 0;
  } else if (modeLeft == 0 && modeRight == 1) {
    currentMode = 1;
  } else if (modeLeft == 1 && modeRight == 0) {
    currentMode = 2;
  } else if (modeLeft == 1 && modeRight == 1) {
    currentMode = 3;
  }
  
}
