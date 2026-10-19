/*
CSC 134
M2HW1 - Gold
Herfendal
04 October 2026
deleted and remade with Copilot 10/19
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name;
    double startingBalance;
    double depositAmount;
    double withdrawalAmount;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting balance: $";
    cin >> startingBalance;

    cout << "Enter the amount to deposit: $";
    cin >> depositAmount;

    cout << "Enter the amount to withdraw: $";
    cin >> withdrawalAmount;

    double endingBalance = startingBalance + depositAmount - withdrawalAmount;

    cout << fixed << showpoint << setprecision(2);
    cout << "\nAccount Summary for " << name << '\n';
    cout << "Starting balance: $" << startingBalance << '\n';
    cout << "Deposit:          $" << depositAmount << '\n';
    cout << "Withdrawal:       $" << withdrawalAmount << '\n';
    cout << "Ending balance:   $" << endingBalance << '\n';

    return 0;
}