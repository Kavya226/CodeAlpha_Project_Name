TASK1:

CGPA Calculator (C++)

This project is *Task 1* of my internship at *CodeAlpha*.

## About the Project
The *CGPA Calculator* is a simple C++ program that allows users to input course names, credit hours, and grade points to calculate their overall CGPA. It helps students quickly find out their academic performance using a basic terminal-based interface.

---

## Features
- User-friendly terminal interface
- Accepts custom number of courses
- Calculates total grade points and CGPA
- Displays each course's details

---

## Technologies Used
- *Language:* C++
- *IDE:* Any C++ IDE or terminal-based compiler like g++ or Code::Blocks

---

## How to Run the Program

1. *Compile the code:*
   ```bash
   g++ cgpa_calculator.cpp -o cgpa

RUN THE EXCECUTABLE
./cgpa

SAMPLE OUTPUT
Enter number of courses: 3

Enter course name: Math
Enter credits for Math: 4
Enter grade point for Math: 9

Enter course name: Physics
Enter credits for Physics: 3
Enter grade point for Physics: 8

Enter course name: Chemistry
Enter credits for Chemistry: 2
Enter grade point for Chemistry: 10

--- Course Details ---
Course: Math, Credits: 4, Grade Point: 9
Course: Physics, Credits: 3, Grade Point: 8
Course: Chemistry, Credits: 2, Grade Point: 10

Total Credits: 9.00
CGPA: 8.78


Internship Credit:

This project was completed as part of my internship at CodeAlpha.
It helped me apply core C++ programming concepts and improve problem-solving skills.

TASK3:
SUDOKU SOLVER

# Task 3: Sudoku Solver

## Overview

This is a C++ project that solves Sudoku puzzles using backtracking and algorithmic logic. The solver can handle puzzles of various difficulty levels. Optionally, a graphical user interface (GUI) can be added for enhanced user interaction.

## Features

- Solves standard 9x9 Sudoku puzzles
- Handles easy to hard difficulty levels
- Uses recursive backtracking algorithm
- Simple terminal-based interaction (GUI is optional)
- Clean and modular code using object-oriented principles

## Technologies Used

- *Language:* C++
- *Concepts:* Backtracking, Arrays, Loops, Recursion
- *Tools:* Code::Blocks / Visual Studio / g++

## How to Run

1. *Clone the Repository:*
   ```bash
   git clone https://github.com/yourusername/internship-tasks.git
   cd internship-tasks/Task3-SudokuSolver
2. Compile the Code:

g++ sudoku_solver.cpp -o sudoku_solver


3. Run the Executable:

./sudoku_solver

SAMPLE INPUT:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

SAMPLE OUTPUT:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
Future Improvements

Add a GUI using Qt or SFML

Allow custom input from users

Puzzle difficulty classification

Timer to show solution speed

TASK4:

BANKING SYSTEM
 
Task 4: Banking System

## Overview

This is a C++ project simulating a basic banking system. The project is built using Object-Oriented Programming (OOP) concepts and includes classes for customers, accounts, transactions, and banking services.

## Features

- Create and manage customer profiles
- Open and manage bank accounts
- Perform banking operations:
  - Withdraw
  - Deposit
  - Transfer between accounts
- View account details including:
  - Balance
  - Recent transactions

## Technologies Used

- *Language:* C++
- *Concepts:* Object-Oriented Programming (OOP), Classes, Inheritance, File Handling
- *Tools:* Code::Blocks / Visual Studio / g++

## How to Run

1. *Clone the Repository:*
   ```bash
   git clone https://github.com/yourusername/internship-tasks.git
   cd internship-tasks/Task4-BankingSystem

2. Compile the Code:

g++ banking_system.cpp -o banking_system


3. Run the Executable:

./banking_system



Sample Output

--- Welcome to the Banking System ---

1. Create Account
2. Deposit Money
3. Withdraw Money
4. Transfer Money
5. View Account Details
6. Exit

Enter your choice: 1
Enter customer name: Kavya
Account created successfully with Account ID: 1001

Enter your choice: 2
Enter Account ID: 1001
Enter amount to deposit: 5000
Amount deposited successfully.

Enter your choice: 5
Account ID: 1001
Name: Kavya
Balance: ₹5000
Recent Transactions: Deposit ₹5000

Future Improvements

Add login and authentication

Add interest calculation

Export account statements to file

GUI interface for easier usage


