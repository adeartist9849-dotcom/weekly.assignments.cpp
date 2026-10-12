#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "1234";

    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {

            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again." << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}