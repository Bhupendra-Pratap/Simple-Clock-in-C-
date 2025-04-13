# Simple-Clock-in-C-
This C++ program implements a Clock, Timer, and Stopwatch with a menu-driven interface. Features include displaying the current time, a countdown timer, and a stopwatch with real-time updates.  Simple and interactive!

## Features

1. **Clock**: Displays the current system time, updating every second.
2. **Timer**: Allows the user to set a countdown timer in seconds, displaying the remaining time until it reaches zero.
3. **Stopwatch**: A stopwatch that starts counting from zero and displays the elapsed time in hours, minutes, and seconds.

## **Code Overview**
**Menu:** The menu() function displays the main menu and takes user input for the desired option.
**Clock:** The currenttime() function retrieves and displays the current system time.
**Timer:** The timer() function counts down from a user-specified number of seconds.
**Stopwatch:** The stopwatch() function continuously increments and displays elapsed time until interrupted.

## **Requirements**
A C++ compiler (e.g., GCC).
The program uses the unistd.h library for the sleep() function, which may require a Unix-like environment (Linux, macOS, or WSL on Windows).

## **Notes**
The program uses system("cls") to clear the screen, which works on Windows. For Linux or macOS, replace cls with clear in the code.
To stop the stopwatch, use Ctrl+C.