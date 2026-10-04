#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "1 se 10 ke beech ek number guess karo: ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "🎉 Correct! Tum jeet gaye!" << endl;
    }
    else if (guess < secretNumber) {
        cout << "Too low! Number thoda bada hai." << endl;
    }
    else {
        cout << "Too high! Number thoda chhota hai." << endl;
    }

    return 0;
}
