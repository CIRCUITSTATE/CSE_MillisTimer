
# CSE_MillisTimer

**CSE_MillisTimer** is a simple timer library from *CIRCUITSTATE Electronics* for the Arduino platform. It uses the `millis()` function to create a timer instance that you can use for controlled timing of events in your code. You just need to create a timer instance with the time period needed, and initialize it anywhere in your code. Then you can call the `isElapsed()` function to check if the timer has elapsed or not. This library makes it easy to use the `millis()` function without saving the value in a variable and comparing it by yourself. Check out the examples to see how it works.

CSE_MillisTimer is a stripped-down version of the more powerful [**ptScheduler**](https://github.com/vishnumaiea/ptScheduler) library. If you want more control over your timing, use the ptScheduler library instead.

## Example

Here is the basic `Hello World` example.

```cpp
#include <CSE_MillisTimer.h>

// Create a timer instance
CSE_MillisTimer helloTimer (1000);  // Time period is 1000 ms.

// Setup function runs once
void setup() {
  Serial.begin (115200);  // Initialize the serial port.
  delay (2000);
  
  helloTimer.start(); // Start the timer.
}

// Infinite loop
void loop() {
  if (helloTimer.isElapsed()) { // Check if the timer has elapsed.
    Serial.println ("Hello World!");  // Print "Hello World!" to the serial port.
    helloTimer.start(); // Restart the timer.
  }
}
```

## Documentation

Please see the [API.md](/docs/API.md) file for the documentation.

## References

- [ptScheduler : A task scheduler library for Arduino](https://github.com/vishnumaiea/ptScheduler) - GitHub
- [ptScheduler : A Minimal Cooperative Task Scheduler for Arduino](https://www.circuitstate.com/tutorials/ptscheduler-a-minimal-cooperative-task-scheduler-for-arduino/) - CIRCUITSTATE
