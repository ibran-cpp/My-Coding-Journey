#include <iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        sum = sum + i;
    }

    cout << "Sum from 1 to " << number << " = " << sum << endl;

    return 0;
}
