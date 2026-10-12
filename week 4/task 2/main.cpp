#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "Enter amount to withdraw: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Insufficient balance!" << endl;
            break;
        }

        balance = balance - withdrawal;

        cout << "Remaining balance: " << balance << endl;

        if (balance == 0)
            cout << "Balance is zero." << endl;
    }

    return 0;
}