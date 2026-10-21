
/*
CSC 134
M3T1 
Herfendal
19 October 2026

*/

#include <iostream>

int main() {
    // Variable to store the user's input
    double grade;

    // 1. Program Requirement: Ask the user to input a numerical grade
    std::cout << "Enter your numerical grade (0 - 100): ";
    std::cin >> grade;

    // 2. Program Requirement: Use conditional statements to determine the letter grade
    // Here we use the Boolean AND (&&) operator to check ranges.
    if (grade >= 90 && grade <= 100) {
        std::cout << "Letter Grade: A" << std::endl;
    } 
    else if (grade >= 80 && grade < 90) {
        std::cout << "Letter Grade: B" << std::endl;
    } 
    else if (grade >= 70 && grade < 80) {
        std::cout << "Letter Grade: C" << std::endl;
    } 
    else if (grade >= 60 && grade < 70) {
        std::cout << "Letter Grade: D" << std::endl;
    } 
    else if (grade >= 0 && grade < 60) {
        std::cout << "Letter Grade: F" << std::endl;
    } 
    else {
        // Optional safety check for numbers outside 0 - 100
        std::cout << "Invalid input. Please enter a grade between 0 and 100." << std::endl;
    }

    return 0;
}

