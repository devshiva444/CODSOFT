#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char currentMarker;
int currentPlayer;

void drawBoard() {
    cout << "\n-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (slot < 1 || slot > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move! Try again.\n";
        return false;
    }

    board[row][col] = currentMarker;
    return true;
}

int checkWinner() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return currentPlayer;
    }

    // Columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return currentPlayer;
    }

    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return currentPlayer;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return currentPlayer;

    return 0;
}

void swapPlayerAndMarker() {
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
}

void resetBoard() {
    char resetValues = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = resetValues++;
}

int main() {
    cout << "==============================" << endl;
    cout << "         TIC TAC TOE" << endl;
    cout << "==============================" << endl;

    cout << "Player 1, choose your marker (X or O): ";
    cin >> currentMarker;
    currentPlayer = 1;

    drawBoard();

    int winnerPlayer = 0;
    for (int i = 0; i < 9; i++) {
        int slot;
        cout << "Player " << currentPlayer << ", enter your slot (1-9): ";
        cin >> slot;

        if (!placeMarker(slot)) {
            i--;
            continue;
        }

        drawBoard();

        winnerPlayer = checkWinner();
        if (winnerPlayer != 0) {
            cout << " Player " << currentPlayer << " wins the game!\n";
            break;
        }

        swapPlayerAndMarker();
    }

    if (winnerPlayer == 0)
        cout << "It's a draw!\n";

    return 0;
}
