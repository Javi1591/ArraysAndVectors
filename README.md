# Arrays and Basic 2D Arrays (Chapter 7)

A C++ console application designed to demonstrate the use of one-dimensional and two-dimensional arrays, random number generation, string handling, and formatted output. This project emphasizes data storage, traversal, and simple analysis using loops.

## Overview
- Declares and initializes several arrays:
  - `double dArr[5]` — holds random floating-point values.
  - `long lArr[7]` — preloaded long integer values.
  - `int iArr[3][5]` — a 3×5 integer matrix filled with random values.
  - `char sName[30]` — a C-string for name storage.
- Displays array contents, totals, and averages.
- Finds the highest value in an array.
- Populates a 2D array and prints it by row and by column.
- Demonstrates character array operations and ASCII output.

## Core Logic
- Generates random numbers using `rand()` seeded with `srand((unsigned)time(NULL))`.
- Iterates through each array using `for` loops and pointer-style indexing.
- Reads a name into `sName` via `cin.getline` and prints the ASCII values for each character until the null terminator.
- Uses `strcpy_s` to overwrite the name with `"Albert Einstein"` and prints the ASCII code of the 12th character.
- Employs `setw` from `<iomanip>` to align 2D array output neatly.

## Input Validation
- Random number ranges are controlled through modular arithmetic.
- String input limited to 29 characters (plus null terminator) to prevent overflow.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o Arrays nazarioCPP17.cpp
  ./Arrays
