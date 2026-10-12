#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment <= feeBalance) {
            feeBalance = feeBalance - payment;
            cout << "Payment successful." << endl;
        } else {
            cout << "Payment is greater than the fee balance." << endl;
        }
    }

    void displayStatus() {
        cout << "\n===== STUDENT FEE STATUS =====\n";
        cout << "Student Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student;

    student.inputStudent();
    student.makePayment();
    student.displayStatus();

    return 0;
}