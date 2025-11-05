# ❌⭕ Task 3 – Tic Tac Toe Game

This is my third project under the **CodSoft C++ Internship** program.  
I created a two-player **Tic Tac Toe** console game completely in C++.

---

##  About the Project
In this game, two players take turns marking their symbol (X or O)  
on a 3×3 board. The program checks after every move if any player has won  
or if the match ends in a draw.

The board is updated and shown after every turn,  
and players are alerted when they try to choose an invalid position.

---

##  What I Used
Main concepts I used:
- 2D Arrays for the board  
- Loops and conditions for turn handling  
- Functions for checking win/draw  
- Simple user input and output handling  

---

##  Sample Output
==============================
         TIC TAC TOE
==============================
Player 1, choose your marker (X or O): 0

-------------
| 1 | 2 | 3 | 
-------------
| 4 | 5 | 6 | 
-------------
| 7 | 8 | 9 | 
-------------
Player 1, enter your slot (1-9): 2

-------------
| 1 | 0 | 3 | 
-------------
| 4 | 5 | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 2, enter your slot (1-9): 5

-------------
| 1 | 0 | 3 |
-------------
| 4 | X | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 1, enter your slot (1-9): 3

-------------
| 1 | 0 | O |
-------------
| 4 | X | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 2, enter your slot (1-9): 4

-------------
| 1 | 0 | O |
-------------
| X | X | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 1, enter your slot (1-9): 1

-------------
| O | 0 | O |
-------------
| X | X | 6 |
-------------
| 7 | 8 | 9 |
-------------
Player 2, enter your slot (1-9): 6

-------------
| O | 0 | O |
-------------
| X | X | X |
-------------
| 7 | 8 | 9 |
-------------
 Player 2 wins the game!



---

##  How to Run
Use these commands to compile and run:

```bash
g++ main.cpp -o main
main
