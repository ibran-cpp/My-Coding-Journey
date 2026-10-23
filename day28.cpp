#include <iostream>
using namespace std;

int main() {
    int secretNumber = 27;
    int guess;
    int attempts = 0;

    cout << "========================\n";
    cout << "  NUMBER GUESSING GAME\n";
    cout << "========================\n";

    cout << "Guess a number between 1 and 50!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "\nCongratulations! You won!\n";
            cout << "Attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    cout << "Thanks for playing!\n";

    return 0;
}
