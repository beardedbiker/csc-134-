/*
CSC 134
M2HW1 - Gold
Herfendal
04 October 2026
*/


#include <iostream>
#include <iomanip> // Required for fixed and setprecision

using namespace std;

int main() {
    // Constants for the updated pricing conditions
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables for crate dimensions and calculations
    double length, width, height;
    double volume, cost, charge, profit;

    // Set the output formatting for all floating-point numbers to 2 decimal places
    cout << fixed << showpoint << setprecision(2);

    // Get user input for crate dimensions
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Perform calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated details
    cout << "\n--- Crate Storage Summary ---" << endl;
    cout << "Crate Volume:   " << volume << " cubic feet" << endl;
    cout << "Cost to Build:  $" << cost << endl;
    cout << "Customer Charge: $" << charge << endl;
    cout << "Net Profit:     $" << profit << endl;

    return 0;
}