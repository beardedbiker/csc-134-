
/*
CSC 134
M3HW1 
Herfendal
21 October 2026

*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION DECLARATIONS -- JUST THE OUTLINE (name, input, output)
void question1();
void question2 ();
void question3 ();

int main() {
    // first run Q 1
    question1();
    // run Q 2
    question2();
    // run Q 3
    question3();
    return 0; 
}

// FUNCTION DEFINITION -- the entire code
void question1() {
    // write question 1 here as if it were a program
    cout << "Question 1" << endl;

    // Hello, I'm a sales bot!
    cout << "Do you like Harleys? Please type yes or no." << endl;
    string answer;
    cin >> answer; 
    if(answer == "yes") {
        cout << "That's great! I have what you're looking for." << endl;
    }
    else if (answer == "no"){
        cout << " Well, let me know if you change your mind." << endl;
    }
    else {
        cout << "ehh" << endl;
    }




    /*
    Yes
    That's great! I have what you're looking for.

    Hello, I'm a sales bot!
    Do you like Harleys? Please type yes or no
    No
    Well, let me know if you change your mind.

    Hello, I'm a sales bot!
    Do you like Harleys? Please type yes or no.
    Maybe
    If you're not sure, lets have a talk.
    */

}
void question2() {
    // write question 2 here as if it were a program
    cout << "Question 2" << endl;

    // Declare our variables
    string item = "𓌉◯𓇋𖤐🍕𖤐𓌉◯𓇋y pizza";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double tip_amount = 0.0;   // Initialize tip to $0.00
    double total;              // price + tax + tip
    int order_type;            // 1 for dine in, 2 for to go
      
    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl << endl;
    
    // Ask user for dine-in or to-go perimeter
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> order_type;
    cout << endl;
      
    // Calculate the meal price and tax
    tax_amount = item_price * tax_percent; // take 8% of the item
    
    // If/Else logic to apply a 15% tip only for Dine In
    if (order_type == 1) {
        double tip_percent = 0.15; // 15%
        tip_amount = item_price * tip_percent;
    } else {
        tip_amount = 0.0; // No tip for to-go
    }
    
    // Calculate the final total price
    total = item_price + tax_amount + tip_amount;
      
    // Print the receipt in a clean format
    cout << fixed << setprecision(2);
    cout << "-------------------------------" << endl;
    cout << "        RECEIPT TOTALS         " << endl;
    cout << "-------------------------------" << endl;
    cout << left << setw(18) << "Meal Price:" << "$" << right << setw(6) << item_price << endl;
    cout << left << setw(18) << "Sales Tax (8%):" << "$" << right << setw(6) << tax_amount << endl;
    
    // Only display a tip row if the user chose Dine In
    if (order_type == 1) {
        cout << left << setw(18) << "Tip (15%):" << "$" << right << setw(6) << tip_amount << endl;
    }
    
    cout << "-------------------------------" << endl;
    cout << left << setw(18) << "Total Due:" << "$" << right << setw(6) << total << endl;
    cout << "-------------------------------" << endl;

}


void question3() {
    // write question 3 here as if it were a program
    cout << "Question 3" << endl;

    // 

}