
![CSE_MillisTimer](https://socialify.git.ci/CIRCUITSTATE/CSE_MillisTimer/image?description=1&font=KoHo&forks=1&issues=1&language=1&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Auto)

# CSE_MillisTimer

**CSE_MillisTimer** is a simple timer library from [*CIRCUITSTATE Electronics*](https://www.circuitstate.com/) for the Arduino platform. It uses the `millis()` function to create a timer instance that you can use for controlled timing of events in your code. You just need to create a timer instance with the time period needed, and initialize it anywhere in your code. Then you can call the `isElapsed()` function to check if the timer has elapsed or not. This library makes it easy to use the `millis()` function without saving the value in a variable and comparing it by yourself. Check out the examples to see how it works.

CSE_MillisTimer is a stripped-down version of the more powerful [**ptScheduler**](https://github.com/vishnumaiea/ptScheduler) library. If you want more control over your timing, use the ptScheduler library instead.

## Installation

This library is available from the official **Arduino Library Manager**. Open the Arduino IDE, search for "CSE_MillisTimer" and install the latest version of the library.

Additionally, you can download the latest release package from the GitHub repository and install it manually. To do so, open the Arduino IDE, go to *Sketch > Include Library > Add .ZIP Library* and select the downloaded file.

Another method is to clone the GitHub repository directly into your `libraries` folder. The development branch will have the latest features, bug fixes and other changes. To do so, navigate to your `libraries` folder (usually located at *Documents/Arduino/libraries* on Windows and *~/Documents/Arduino/libraries* on macOS) and execute the following command:

```
git clone https://github.com/CIRCUITSTATE/CSE_MillisTimer.git
```

The library can also be installed via **PlatformIO**. All officially listed Arduino listed libraries are automatically fetched by PlatformIO. Use the `lib_deps` search option to install the library.

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

## API Reference

Please see the [API.md](/docs/API.md) file for the API reference.

## References

- [ptScheduler : A task scheduler library for Arduino](https://github.com/vishnumaiea/ptScheduler) - GitHub
- [ptScheduler : A Minimal Cooperative Task Scheduler for Arduino](https://www.circuitstate.com/tutorials/ptscheduler-a-minimal-cooperative-task-scheduler-for-arduino/) - CIRCUITSTATE
