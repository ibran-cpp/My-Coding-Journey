#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    int balance = 5000;
    int amount;

    cout << "===== MINI ATM =====\n";
    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin != 1234) {
        cout << "Wrong PIN! Access Denied.\n";
        return 0;
    }

    cout << "\nWelcome to Your ATM!\n";

    do {
        cout << "\n1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Balance: Rs. "
                     << balance << "\n";
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!\n";
                } else {
                    cout << "Invalid Amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid Amount!\n";
                } else if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal Successful!\n";
                } else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 4:
                cout << "Thank You for Using ATM!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
