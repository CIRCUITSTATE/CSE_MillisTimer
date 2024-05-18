
//======================================================================================//
/**
 * 
 * @file CSE_MillisTimer.cpp
 * @brief Main source file for the CSE_MillisTimer library.
 * @date +05:30 08:36:48 PM 18-05-2024, Saturday
 * @version 0.0.1
 * @author Vishnu Mohanan (@vishnumaiea)
 * @par GitHub Repository: https://github.com/CIRCUITSTATE/CSE_MillisTimer
 * @par MIT License
 * 
 */
//======================================================================================//

#include "CSE_MillisTimer.h"

//======================================================================================//
/**
 * @brief The constructor accepts a time period in milliseconds and the timer logic.
 * The default timer logic is false, which means that the timer will be true for the
 * time period and false otherwise.
 * @param period The time period in milliseconds.
 * @param toReverse The timer logic. The default is false.
 * @return millisTimer:: 
 */
CSE_MillisTimer:: CSE_MillisTimer (uint32_t period, bool toReverse) {
  timePeriod = period;
  timeDelta = 0;
  timeStart = 0;
  timerLogic = toReverse;
  timerElapsed = true;
}

//======================================================================================//
/**
 * @brief Starts the timer. You can set the state of the timer at the start. This will 
 * override the timer logic. The default state is false.
 * 
 * @param startState The start state of the timer. The default is false.
 */
void CSE_MillisTimer:: start (bool startState) {
  timeDelta = 0;
  timerElapsed = startState;
  timeStart = millis();
}

//======================================================================================//
/**
 * @brief Determines if the timer is running or not, by checking if the time period has
 * elapsed or not. If the timer logic is false, this function will return true when the
 * timer is active and false when the timer is elapsed. The output is reversed if the 
 * timer logic is true.
 * 
 * @return true State depends on the timer logic.
 * @return false State depends on the timer logic.
 */
bool CSE_MillisTimer:: isRunning() {
  // If the timer is elapsed, that obviously means that it is not running.
  // We can then return whatever the timer logic is. The value of timerLogic
  // is never changed.
  if (timerElapsed) {
    timerElapsed = false;
    return timerLogic;
  }
  
  // Calculate the time elapsed since the timer started.
  timeDelta = millis() - timeStart;
  
  // Check if the timer has elapsed or not.
  if (timeDelta < timePeriod) { // If the timer has not elapsed.
    timerElapsed = false;
    return !timerLogic;
  }
  else { // If the timer has elapsed.
    timerElapsed = true;
    return timerLogic;
  }
}

//======================================================================================//
/**
 * @brief Checks if the timer has elapsed or not. This function is the opposite of the
 * isRunning() function.
 * 
 * @return true State depends on the timer logic.
 * @return false State depends on the timer logic.
 */
bool CSE_MillisTimer:: isElapsed() {
  return !isRunning();
}

//======================================================================================//