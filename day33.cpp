#include <iostream>
using namespace std;

int main() {
    int choice;
    int balance = 5000;
    int amount;

    do {
        cout << "\n===== MINI ATM =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Your Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter Deposit Amount: ";
                cin >> amount;

                if(amount > 0) {
                    balance += amount;
                    cout << "Money Deposited Successfully!\n";
                } else {
                    cout << "Invalid Amount!\n";
                }
                break;

            case 3:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please Collect Your Money!\n";
                } else {
                    cout << "Insufficient Balance or Invalid Amount!\n";
                }
                break;

            case 4:
                cout << "Thank You for Using ATM!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
