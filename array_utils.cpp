/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Name: Alex Inga
Assignment 5
File: array_utils.cpp
*/

#include <iostream> // Allows us to use cin and cout
using namespace std; // Avoids writing std:: every time

// Function that prints the array from first to last
void printForward(const int arr[], int size) {
    for (int i = 0; i < size; i++) { // Starts at index 0
        cout << arr[i] << " "; // Prints each element
    }
    cout << endl; // Moves to next line
}

// Function that prints the array from last to first
void printReverse(const int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) { // Goes backward
        cout << arr[i] << " "; // Prints each element
    }
    cout << endl; // Moves to next line
}

// Function that counts numbers greater than the limit
int countAbove(const int arr[], int size, int limit) {
    int count = 0; // Starts count at zero

    for (int i = 0; i < size; i++) { // Checks each element
        if (arr[i] > limit) { // Checks if number is greater
            count++; // Increases count by one
        }
    }

    return count; // Sends the count back to main
}

int main() { // Main function starts here

    const int SIZE = 6; // Sets array size to 6

    // Creates an array containing 6 numbers
    int values[SIZE] = {14, 3, 27, 9, 50, 21};

    int limit; // Stores the user's chosen limit

    cout << "Forward: "; // Prints forward label
    printForward(values, SIZE); // Calls forward function

    cout << "Reverse: "; // Prints reverse label
    printReverse(values, SIZE); // Calls reverse function

    cout << "Count values above: "; // Asks for limit
    cin >> limit; // Reads user's limit

    // Calls function and prints how many values are above limit
    cout << "Count: " << countAbove(values, SIZE, limit)
         << endl;

    return 0; // Ends the program successfully
}
