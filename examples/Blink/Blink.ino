
//==============================================================================//

#include <CSE_MillisTimer.h>

//==============================================================================//

CSE_MillisTimer blinkTimer (500); // Create a timer with a time period of 500 ms.

//==============================================================================//

void setup() {
  pinMode (LED_BUILTIN, OUTPUT);  // Initialize the LED pin as an output.
  blinkTimer.start (true);  // Start the timer and set the start state to true.
}

//==============================================================================//

void loop() {
  // Reverse the state of the LED every time the timer is elapsed.
  if (blinkTimer.isElapsed()) {
    digitalWrite (LED_BUILTIN, !digitalRead (LED_BUILTIN));
    blinkTimer.start();
  }

  // Add more non-blocking code here.
}

//==============================================================================//
