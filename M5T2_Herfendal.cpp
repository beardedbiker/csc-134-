
/*
CSC 134
M5T1- Intro To Functions 
Herfendal
02 November 2026

*/

#include <iostream>
using namespace std;

// Partner: AI navigator - [tool name, e.g. GitHub Copilot Chat]
int square(int num);
void printAnswerLine(int number, int squared);
main(){
    cout << "Table of Squares Program" << endl;
    const int MAX = 10;
    for (int i=1; i <= MAX; i++) {
        int squared = square(i);
        printAnswerLine(i, squared);
    }
   
     
    
}

// Define functions here.
int square(int num) {
        // Does the math -- input, an integer, output, that integer squared.
        int squared = num * num;
        return squared;
}

void printAnswerLine(int number, int squared) {
    // Print one line of the table of squares
    // example output:
    // 3        9
    cout << number << " \t" << squared << endl;
}