#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Congratulations! You guessed it!" << endl;
    }
    else if (guess < secretNumber) {
        cout << "Your number is too small!" << endl;
    }
    else {
        cout << "Your number is too big!" << endl;
    }

    cout << "Game Over!" << endl;

    return 0;
}
