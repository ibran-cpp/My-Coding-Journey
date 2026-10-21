#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "========================\n";
    cout << "  NUMBER GUESSING GAME\n";
    cout << "========================\n";

    cout << "Guess a number between 1 and 100!\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try a smaller number.\n";
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try a bigger number.\n";
        }
        else {
            cout << "\nCongratulations! You won!\n";
            cout << "Attempts: " << attempts << "\n";
        }

    } while (guess != secretNumber);

    cout << "\nThanks for playing!\n
