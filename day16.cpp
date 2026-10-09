#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "===== GUESS THE NUMBER =====" << endl;
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secret) {
        cout << "Correct! You win!" << endl;
    } else {
        cout << "Wrong guess! Try again tomorrow." << endl;
    }

    return 0;
}
