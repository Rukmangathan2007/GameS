# GUESS THE NUMBER — C TERMINAL GAME

A simple command-line number guessing game written in C.
The program generates a random 5-digit number, and the player must guess it
using hints provided after each attempt.

---

## GAME RULES

The program generates a random 5-digit secret number.

After each guess, feedback is provided using:

C → Correct digit in the correct position
R → Correct digit in the wrong position
W → Digit not present in the number

The player has 7 attempts to guess the correct number.

---

## REQUIREMENTS

* GCC (or any C compiler)
* Standard C libraries:
  stdio.h
  stdlib.h
  string.h
  time.h

---

## BUILD AND RUN

Compile:
gcc game.c -o guess

Run:
./guess

---

## PROJECT STRUCTURE

guess-the-number/
|
|-- game.c
|-- README.txt

---

## POSSIBLE IMPROVEMENTS

* Prevent duplicate digits in the key
* Add input validation
* Add difficulty levels
* Add replay option
* Track score or attempts
* Improve UI formatting

---

## LICENSE

This project is open-source and available under the MIT License.
