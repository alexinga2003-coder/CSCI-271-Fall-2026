/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************



/*
Name: Alex Inga
Assignment 5
File: search_count.cpp
*/

#include <iostream> // Allows input and output
using namespace std; // Makes cin and cout easier to use

int main() { // Main function starts here

    const int SIZE = 10; // Sets array size to 10

    // Creates an array with 10 numbers
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};

    int target; // Stores the number we search for
    int foundIndex = -1; // -1 means number not found yet
    int count = 0; // Counts how many times number appears

    cout << "Enter a number to search for: "; // Asks user
    cin >> target; // Reads the number entered

    // Search through the entire array
    for (int i = 0; i < SIZE; i++) { // Checks all 10 elements

        if (data[i] == target) { // Checks if number matches
            count++; // Adds one to the count

            if (foundIndex == -1) { // Checks if first match
                foundIndex = i; // Saves first matching index
            }
        }
    }

    if (foundIndex != -1) { // Checks if number was found
        cout << target << " first found at index "
             << foundIndex << endl; // Prints first index

        cout << target << " appears " << count
             << " time(s)" << endl; // Prints number of matches
    }
    else { // Runs if number was never found
        cout << target << " was not found." << endl;
    }

    return 0; // Ends program successfully
}
