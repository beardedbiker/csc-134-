#include <iostream>
#include <string>

using namespace std;

int main() {
    // Salesperson details
    string name = "Jane Smith";
    int apples = 100;
    double pricePerApple = 0.25;

    // Calculate the total price of all apples
    double totalPrice = apples * pricePerApple;

    // Print the store information and totals
    cout << "Welcome to " << name << "'s Apple Orchard!" << endl;
    cout << "Number of apples for sale: " << apples << endl;
    cout << "Price per apple: $" << pricePerApple << endl;
    cout << "Price to purchase all apples at once: $" << totalPrice << endl;

    return 0;
}