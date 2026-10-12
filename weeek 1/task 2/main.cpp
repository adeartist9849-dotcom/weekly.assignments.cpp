#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theory, practical, average;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory marks: ";
    cin >> theory;

    cout << "Enter practical marks: ";
    cin >> practical;

    average = (theory + practical) / 2;

    cout << "\n===== DRIVING TEST RESULT =====\n";
    cout << "Student: " << studentName << endl;
    cout << "Theory Marks: " << theory << endl;
    cout << "Practical Marks: " << practical << endl;
    cout << "Average: " << average << endl;

    if (average >= 50)
        cout << "Result: PASSED" << endl;
    else
        cout << "Result: FAILED" << endl;

    return 0;
}