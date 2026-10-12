#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double price, total;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> price;

    total = quantity * price;

    cout << "\n===== PHONE SALES RECEIPT =====\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per Phone: " << price << endl;
    cout << "Total Sales: " << total << endl;

    return 0;
}