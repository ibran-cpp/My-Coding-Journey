
#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Correct! You are a genius!" << endl;
    }
    else if (guess < secretNumber) {
        cout << "Too low! Try a bigger number." << endl;
    }
    else {
        cout << "Too high! Try a smaller number." << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
