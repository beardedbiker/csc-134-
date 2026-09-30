/*
CSC- 134 
M2T2- Receipt Calculator
Herfendal
09/27/2026
*/

#include <iostream>
#include <iomanip> // for two decimal places trick
using namespace std; 

int main () {
// Purpose - create a simple receipt
// Should also handle sales tax (8%)

// Declare our variables
string item = "𓌉◯𓇋𖤐🍕𖤐𓌉◯𓇋y pizza";
double item_price = 5.99;
double tax_percent = 0.08; // 8% is 8/100
double tax_amount;         // tax in $
double total;              // price + tax
  
// Greet user and take the order
cout << "Welcome to our CSC 134 Restuarant!" << endl;
cout << "You ordered one "  << item << "." << endl;
  
// Calculate the meal price 
tax_amount  = item_price * tax_percent; // take 8% of the item
total = item_price + tax_amount;
  
// Calculate the sales tax and the total price

// Print the receipt
cout << setprecision << fixed;
cout <<  total << endl;

  return 0; // no errors
}
