/*
CSC 134
M4HW1 
Herfendal
02 November 2026
*/

#include <iostream>
using namespace std;

int main() { 
    int width = 5;
    int height = 5;
    // horizontal
    for (int j=0; j < width; j++) {
        cout << "*" << " ";
    }
    cout << endl;
    // vertical
    for (int i=0; i < height; i++) {
        cout << "*" << endl;
    }
    // the whole thing
    cout << endl << endl;
    cout << "Rectangle " << width << " by " << height << endl;
    for (int i=0; i < height; i++) {
        // height times, draw the full line
        for (int j=0; j < width; j++) {
            cout << "*" << " ";
    
        }
        cout << endl;
    }
}