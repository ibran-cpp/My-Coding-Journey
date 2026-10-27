#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    int choice;
    int balance = 5000;
    int amount;

    cout << "========================" << endl;
    cout << "    DIGITAL ATM" << endl;
    cout << "========================" << endl;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Wrong PIN! Access Denied." << endl;
        return 0;
    }

    do {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Balance: Rs. "
                     << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                } else {
                    cout << "Invalid Amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please Collect Your Money!" << endl;
                } else {
                    cout << "Invalid Amount or Low Balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank You for Using Our ATM!" << endl
