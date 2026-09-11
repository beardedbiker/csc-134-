
/*M2T1
Herfendal
11 September

Input: none
Processing: none
Output: The user's name as the greeting
*/



#include <iostream>
#include <string>

using namespace std;

int main() {
    // Salesperson details
    string name;
    int apples;
    double price_per_apple;

    // Store Setup - get name, count, price
    cout << "Your name: ";
    cin >> name; 
    cout << "how many apples,";
    cin >> apples;
    cout << "how much per apple,";
    cin >> price_per_apple;

    // Calculate the total price of all apples
    double total_price = apples * price_per_apple;

    // Print the store information and totals
    cout << "Welcome to " << name << "'s Apple Orchard!" << endl;
    cout << "Number of apples for sale: " << apples << endl;
    cout << "Price per apple: $" << price_per_apple << endl;
    cout << "Price to purchase all apples at once: $" << total_price << endl;

    return 0;
}