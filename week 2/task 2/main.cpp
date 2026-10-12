#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, score;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    cout << "\nStudent: " << name << endl;

    if (age >= 18) {
        if (score >= 50)
            cout << "Admission: Admitted" << endl;
        else
            cout << "Admission: Not Admitted - Low Score" << endl;
    } else {
        cout << "Admission: Not Admitted - Underage" << endl;
    }

    return 0;
}