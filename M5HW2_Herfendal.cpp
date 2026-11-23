/*
CSC 134
M5HW2- Functions In use
Herfendal
22 November 2026


*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // question 1
    cout << "\nQuestion 1\n";
    string month1, month2, month3;
    double rain1, rain2, rain3, average;
    
     // Month 1
    month1 = "June";
    cout << "Enter the rainfall (in inches) for " << month1 << ": ";
    cin >> rain1;

    // Month 2
     month2 = "July";
    cout << "Enter the rainfall (in inches) for " << month2 << ": ";
    cin >> rain2;

    // Month 3
      month3 = "August";
    
    cout << "Enter the rainfall (in inches) for " << month3 << ": ";
    cin >> rain3;

    // Calculate average
    average = (rain1 + rain2 + rain3) / 3.0;

    // Display result rounded to 2 decimal places
     cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 
         << ", and " << month3 << " is " << average << " inches." << endl;

    // question 2
     cout << "\nQuestion 2\n";
    double width, length, height, volume; 

    // Get dimensions
    cout << "Enter the width of the block: ";
    cin >> width;

    cout << "Enter the length of the block: ";
    cin >> length;

    cout << "Enter the height of the block: ";
    cin >> height;

    // Validate input and calculate volume
    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: No side can be zero or less." << endl;
    } else {
        volume = width * length * height;
        cout << "The volume of the block is " << volume << "." << endl;
    }

     cout << "\nQuestion 3\n";
    int number;

    // Get number
    cout << "Enter a number (1 - 10): ";
    cin >> number;

    // Validate and convert to Roman numeral
    switch (number) {
        case 1:
            cout << "The Roman numeral version of 1 is I." << endl;
            break;
        case 2:
            cout << "The Roman numeral version of 2 is II." << endl;
            break;
        case 3:
            cout << "The Roman numeral version of 3 is III." << endl;
            break;
        case 4:
            cout << "The Roman numeral version of 4 is IV." << endl;
            break;
        case 5:
            cout << "The Roman numeral version of 5 is V." << endl;
            break;
        case 6:
            cout << "The Roman numeral version of 6 is VI." << endl;
            break;
        case 7:
            cout << "The Roman numeral version of 7 is VII." << endl;
            break;
        case 8:
            cout << "The Roman numeral version of 8 is VIII." << endl;
            break;
        case 9:
            cout << "The Roman numeral version of 9 is IX." << endl;
            break;
        case 10:
            cout << "The Roman numeral version of 10 is X." << endl;
            break;
        default:
            cout << "Error: Do not enter a number less than 1 or greater than 10." << endl;
    }

    return 0;
}