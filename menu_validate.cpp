//Alex Inga
//Assignment 4


#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Enter a menu choice (1, 2, or 3): ";
        cin >> choice;

        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Invalid choice, try again." << endl;
        }

    } while (choice != 1 && choice != 2 && choice != 3);

    cout << "You selected option " << choice << "." << endl;

    return 0;
}


   