/*
CSC 134
M2HW1 - Gold
Herfendal
04 October 2026
*/

#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    int pizzasOrdered = 7;
    int slicesPerPizza = 8;
    
    // Constant variable for fixed number of visitors
    const int totalVisitors = 17;
    
    // User inputs
    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzasOrdered;
    
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    
    // Calculations
    int totalSlices = pizzasOrdered * slicesPerPizza;
    int slicesNeeded = totalVisitors * 3; // 17 guests * 3 slices each = 51 slices
    int leftoverSlices = totalSlices - slicesNeeded;
    
    // Output results
    cout << "\n--- Pizza Party Summary ---" << endl;
    cout << "Number of visitors: " << totalVisitors << endl;
    cout << "Total slices available: " << totalSlices << endl;
    cout << "Total slices consumed: " << slicesNeeded << endl;
    
    if (leftoverSlices >= 0) {
        cout << "Leftover slices: " << leftoverSlices << endl;
    } else {
        cout << "Warning: You are short by " << (-leftoverSlices) << " slices!" << endl;
    }
    
    return 0;
}