
//======================================================================================//
/**
 * @file CSE_MillisTimer.h
 * @brief Main header file for the CSE_MillisTimer library.
 * @date +05:30 11:30:34 PM 07-08-2023, Monday
 * @version 0.0.1
 * @author Vishnu Mohanan (@vishnumaiea)
 * @par GitHub Repository: https://github.com/CIRCUITSTATE/CSE_MillisTimer
 * @par MIT License
 * 
 */
//======================================================================================//

#include <Arduino.h>

//======================================================================================//
/**
 * @brief A class to create and manage timers using the millis() function.
 * 
 */
class CSE_MillisTimer {
  public:
    uint32_t timePeriod;  // The time period for which the timer should run.
    uint32_t timeDelta;   // The current time elapsed since the timer started.
    uint32_t timeStart;   // The time at which the timer started.
    bool timerLogic;      // The output logic of the timer.
    bool timerElapsed;    // The state of the timer (elapsed or not elapsed).

    CSE_MillisTimer (uint32_t period, bool toReverse = false);  // Constructor
    void start (bool startState = false); // Start the timer.
    bool isElapsed(); // Check if the timer has elapsed.
    bool isRunning(); // Check if the timer is running.s
};

//======================================================================================//