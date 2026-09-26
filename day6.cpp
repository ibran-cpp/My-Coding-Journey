#include<iostream>
using namespace std;

int main()
{
    int secret = 7;
    int guess;

    cout << "Guess the secret number: ";
    cin >> guess;

    if(guess == secret)
    {
        cout << "Correct! You guessed the number." << endl;
    }
    else if(guess < secret)
    {
        cout << "Too low! Try a bigger number." << endl;
    }
    else
    {
        cout << "Too high! Try a smaller number." << endl;
    }

    return 0;
}
