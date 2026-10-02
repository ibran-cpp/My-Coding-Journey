#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 7) {
        cout << "Correct! You guessed it.";
    } else {
        cout << "Wrong guess!";
    }

    return 0;
}
