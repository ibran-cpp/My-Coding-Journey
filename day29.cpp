#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 10!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secret) {
            cout << "Correct! You won!" << endl;
            cout << "Attempts: " << attempts << endl;
            break;
        }
        else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Too high! Try again." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
