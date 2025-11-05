#  Task 1 – Number Guessing Game

This is my first project under the **CodSoft C++ Internship** program.  
I created a simple console-based **Number Guessing Game** using basic C++ concepts.

---

##  About the Project
In this game, the computer randomly selects a number between 1 and 100.  
The user has to guess that number.  
After every guess, the program tells whether your guess is **too high** or **too low**,  
until you finally find the correct number.

It also counts the total number of attempts taken by the user to guess correctly.

---

##  What I Used
I have mainly used:
- `if` / `else` conditions for decision-making  
- `do-while` loop for repeating guesses  
- `rand()` and `srand()` for random number generation  
- Basic input/output using `cin` and `cout`

---

##  Sample Output
==============================
   NUMBER GUESSING GAME
==============================
I'm thinking of a number between 1 and 100.

Enter your guess: 50
Too low! Try again.

Enter your guess: 60
Too low! Try again.

Enter your guess: 90
Too high! Try again.

Enter your guess: 80
Too high! Try again.

Enter your guess: 75
Too high! Try again.

Enter your guess: 68
Too low! Try again.

Enter your guess: 69
Too low! Try again.

Enter your guess: 70
Too low! Try again.

Enter your guess: 73
Too low! Try again.

Enter your guess: 74

🎉 Congratulations! You guessed the correct number 74 in 10 attempts!

---

##  How to Run
You can compile and run it using any C++ compiler:

```bash
g++ main.cpp -o main
main
