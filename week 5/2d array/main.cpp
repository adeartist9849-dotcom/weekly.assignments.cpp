#include <iostream>
using namespace std;

int main() {
    int occupancy[5][10];

    for (int floor = 0; floor < 5; floor++) {
        cout << "\nFloor " << floor + 1 << endl;

        for (int room = 0; room < 10; room++) {
            cout << "Room " << room + 1
                 << " (1=Occupied, 0=Vacant): ";

            cin >> occupancy[floor][room];
        }
    }

    cout << "\n===== ROOM OCCUPANCY =====\n";

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << floor + 1
             << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    return 0;
}