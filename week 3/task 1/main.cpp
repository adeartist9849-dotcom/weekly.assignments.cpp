#include <iostream>
#include <string>
using namespace std;

string name;
double basicSalary, overtimeHours, ratePerHour;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

double calculateOvertimePay() {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary() {
    return basicSalary + calculateOvertimePay();
}

void displayPayslip() {
    cout << "\n===== PAYSLIP =====\n";
    cout << "Employee: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Pay: " << calculateOvertimePay() << endl;
    cout << "Net Salary: " << calculateNetSalary() << endl;
}

int main() {
    getEmployeeDetails();
    displayPayslip();

    return 0;
}