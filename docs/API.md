
# CSE_MillisTimer Library API Reference

Version 0.0.1, +05:30 09:01:40 PM 18-05-2024, Saturday

## Index

- [CSE\_MillisTimer Library API Reference](#cse_millistimer-library-api-reference)
  - [Index](#index)
  - [Classes](#classes)
  - [Class `CSE_MillisTimer`](#class-cse_millistimer)
    - [`CSE_MillisTimer()`](#cse_millistimer)
    - [`start()`](#start)
    - [`isElapsed()`](#iselapsed)
    - [`isRunning()`](#isrunning)


## Classes

* `CSE_MillisTimer` - A class to wrap `millis()` function call and variables.

## Class `CSE_MillisTimer`

### `CSE_MillisTimer()`

This constructor creates a new `CSE_MillisTimer` object. A demo object names `myTimer` will be used for the documentation.

#### Syntax

```cpp
CSE_MillisTimer myTimer (uint32_t period, bool toReverse);
```

##### Parameters

- `uint32_t period` : The period in milliseconds.
- `bool toReverse` : By default, the timer returns `true` when the timer has elapsed and `false` otherwise. You can reverse this response by setting this argument to `true`. Default is `false`.

##### Returns

`CSE_MillisTimer` object.

### `start()`

Starts the timer by calling the `millis()` function and saving the current time as a counter value. You can set the initial state of the timer (elapsed or not elapsed) by passing the state value.

#### Syntax

```cpp
myTimer.start (bool startState);
```

##### Parameters

- `bool startState` : The initial state of the timer. Default is `true`.

##### Returns

None

### `isElapsed()`

Checks if the timer has elapsed by comparing the current time with the time when the timer was started.

#### Syntax

```cpp
myTimer.isElapsed();
```

##### Parameters

None

##### Returns

- `bool` : `true` if the timer has elapsed, `false` otherwise. This logic will be reversed if the constructor was called with the `toReverse` argument set to `true`.

### `isRunning()`

Returns the exact opposite of `isElapsed()`.

#### Syntax

```cpp
myTimer.isRunning();
```

##### Parameters

None

##### Returns

- `bool` : `true` if the timer is running, `false` otherwise. This logic will be reversed if the constructor was called with the `toReverse` argument set to `true`.
