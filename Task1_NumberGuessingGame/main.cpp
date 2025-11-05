#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "==============================" << endl;
    cout << "   NUMBER GUESSING GAME" << endl;
    cout << "==============================" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess)
            cout << "Too high! Try again." << endl;
        else if (userGuess < numberToGuess)
            cout << "Too low! Try again." << endl;
        else
            cout << "\n🎉 Congratulations! You guessed the correct number "
                 << numberToGuess << " in " << attempts << " attempts!" << endl;

    } while (userGuess != numberToGuess);

    return 0;
}
