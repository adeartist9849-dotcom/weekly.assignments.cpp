#include <iostream>
#include <string>
using namespace std;

string customerName;
double units, bill, discount, finalBill;
const double ratePerUnit = 50;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> units;
}

double calculateBill() {
    return units * ratePerUnit;
}

double applyDiscount(double bill) {
    if (units > 100)
        return bill * 0.10;
    else
        return 0;
}

void displayBill() {
    bill = calculateBill();
    discount = applyDiscount(bill);
    finalBill = bill - discount;

    cout << "\n===== WATER BILL =====\n";
    cout << "Customer: " << customerName << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Bill Before Discount: " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << finalBill << endl;
}

int main() {
    getCustomerDetails();
    displayBill();

    return 0;
}