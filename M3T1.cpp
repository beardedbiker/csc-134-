/*
CSC 134
M3T1 
Herfendal
19 October 2026
*/

// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // Print the area

    cout << "\n--- Rectangle Calculation ---" << endl;
    cout << "Length: " << len1 << endl;
    cout << "Width:  " << wid1 << endl;
     cout << "Length: " << len2 << endl;
    cout << "Width:  " << wid2 << endl;
    cout << "The total area of the rectangle is: " << area1 << endl;
    cout << "The total area of the rectangle is: "   << area2 << endl;

    // Find which rectangle is biggest
    // if statement tests for true of false
    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }

    return 0;
}