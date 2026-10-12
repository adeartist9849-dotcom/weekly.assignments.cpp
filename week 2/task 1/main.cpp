#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int marks;
    char grade;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter exam marks: ";
    cin >> marks;

    if (marks >= 70)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'E';

    cout << "\nStudent: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}