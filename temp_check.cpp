#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter the temperature (F): ";
    cin >> temperature;

    if (temperature < 32) {
        cout << "That's Freezing." << endl;
    }
    else if (temperature <= 59) {
        cout << "That's Cold." << endl;
    }
    else if (temperature <= 75) {
        cout << "That's Mild." << endl;
    }
    else {
        cout << "That's Hot." << endl;
    }

    return 0;
}
