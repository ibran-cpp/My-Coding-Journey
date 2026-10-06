#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess the number (1 to 10): ";
    cin >> guess;

    if (guess == secret) {
        cout << "Correct! You won!" << endl;
    }
    else {
        cout << "Wrong guess!" << endl;
        cout << "The correct number was: " << secret << endl;
    }

    return 0;
}
