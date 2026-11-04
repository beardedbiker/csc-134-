/*
CSC 134
M4HW1 
Herfendal
02 November 2026
*/

#include <iostream>
using namespace std;

int main() {
    int tableNumber; // Variable to hold the user's chosen number

    // Ask the user to enter a number from 1 to 12
    std::cout << "Enter a number from 1 to 12: ";
    std::cin >> tableNumber;
    while (tableNumber <1 || tableNumber >12){
        cout << "Enter a number from 1 to 12: ";
        cin >> tableNumber;

    }

    int i = 1; // Initialize the counter

    // Loop from 1 to 12
    while (i <= 12) {
        // Print the product using the user's chosen number instead of 5
        std::cout << tableNumber << " times " << i << " is " << tableNumber * i << ".\n";
        i++; // Increment the counter
    }

    return 0;
}