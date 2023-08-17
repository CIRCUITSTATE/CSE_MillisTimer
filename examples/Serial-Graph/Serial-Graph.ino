
//==============================================================================//

#include <CSE_MillisTimer.h>

//==============================================================================//

millisTimer helloTimer (3000);
millisTimer serialTimer (10);

//==============================================================================//

void setup() {
  Serial.begin (115200);
  delay (2000);

  // Serial.println ("Millis Timer - Hello World Example");
  helloTimer.start (true);
  serialTimer.start();
}

//==============================================================================//

void loop() {
  // if (serialTimer.isElapsed()) {
  //   Serial.println ("Hello World!");
  //   serialTimer.start();
  // }

  // // One-time Spanning call
  // if (serialTimer.isElapsed()) {
  //   if (helloTimer.isRunning()) {
  //     Serial.println (3);
  //   }
  //   else {
  //     Serial.println (0);
  //   }
  //   serialTimer.start();
  // }


  // Oneshot call
  if (serialTimer.isElapsed()) {
    if (helloTimer.isElapsed()) {
      Serial.println (3);
      helloTimer.start();
    }
    else {
      Serial.println (0);
    }
    serialTimer.start();
  }

  // // Reverse-oneshot call
  // if (serialTimer.isElapsed()) {
  //   if (helloTimer.isRunning()) {
  //     Serial.println (3);
  //   }
  //   else {
  //     Serial.println (0);
  //     helloTimer.start();
  //   }
  //   serialTimer.start();
  // }
}

//==============================================================================//
