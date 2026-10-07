#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;

    cout << "Guess the number (1 to 10): ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Correct! You won the game!" << endl;
    }
    else if (guess < secretNumber) {
        cout << "Too low! Try again." << endl;
    }
    else {
        cout << "Too high! Try again." << endl;
    }

    return 0;
}
