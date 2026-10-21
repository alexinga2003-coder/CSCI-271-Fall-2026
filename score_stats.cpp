/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*

Name: Alex Inga
Assignment 5
File: score_stats.cpp
*/

#include <iostream> // Allows us to use cin and cout
using namespace std; // Lets us write cout without std::

int main() { // Main function where the program starts

    const int SIZE = 5; // Sets the array size to 5
    int scores[SIZE]; // Creates an array for 5 scores

    // Ask the user to enter 5 test scores
    for (int i = 0; i < SIZE; i++) { // Loops 5 times
        cout << "Enter score " << i + 1 << ": "; // Shows score number
        cin >> scores[i]; // Stores the score in the array
    }

    int sum = 0; // Starts the total at zero
    int highest = scores[0]; // Starts highest with first score
    int lowest = scores[0]; // Starts lowest with first score

    // Loop through the array to calculate statistics
    for (int i = 0; i < SIZE; i++) { // Checks every score
        sum += scores[i]; // Adds each score to sum

        if (scores[i] > highest) { // Checks for higher score
            highest = scores[i]; // Updates highest score
        }

        if (scores[i] < lowest) { // Checks for lower score
            lowest = scores[i]; // Updates lowest score
        }
    }

    // Converts sum to double to keep decimal values
    double average = static_cast<double>(sum) / SIZE;

    cout << "Scores: "; // Prints the scores label

    for (int i = 0; i < SIZE; i++) { // Loops through scores
        cout << scores[i] << " "; // Prints each score
    }

    cout << endl; // Moves to the next line
    cout << "Sum: " << sum << endl; // Prints total
    cout << "Average: " << average << endl; // Prints average
    cout << "Highest: " << highest << endl; // Prints highest
    cout << "Lowest: " << lowest << endl; // Prints lowest

    return 0; // Ends the program successfully
}
