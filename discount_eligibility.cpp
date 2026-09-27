#include <iostream>
using namespace std;

int main() {
    int age;
    int isMember;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a member? (1 = yes, 0 = no): ";
    cin >> isMember;

    if (age >= 60 || (age >= 18 && isMember == 1)) {
        cout << "You qualify for the discount." << endl;
    } else {
        cout << "You do not qualify for the discount." << endl;
    }

    return 0;
}
