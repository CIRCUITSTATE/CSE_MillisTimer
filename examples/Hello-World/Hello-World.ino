
//==============================================================================//

#include <CSE_MillisTimer.h>

//==============================================================================//

CSE_MillisTimer helloTimer (1000);  // Create a timer with a time period of 1000 ms.

//==============================================================================//

void setup() {
  Serial.begin (115200);  // Initialize the serial port.
  delay (2000);
  
  helloTimer.start(); // Start the timer.
}

//==============================================================================//

void loop() {
  if (helloTimer.isElapsed()) { // Check if the timer has elapsed.
    Serial.println ("Hello World!");  // Print "Hello World!" to the serial port.
    helloTimer.start(); // Restart the timer.
  }
}

//==============================================================================//
