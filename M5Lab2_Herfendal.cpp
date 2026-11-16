/*
CSC 134
M5Lab2- Intro To Functions 
Herfendal
16 November 2026

*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);
   
   

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}


// functions go here
double getLength() {
   cout << "enter length in ft.";
   double len;
   cin >> len;
   return len;
}
  
double getWidth() {
   cout << "enter width in ft.";
   double wid;
   cin >> wid;
   return wid;

}

double getArea(double length, double width) {
   return length * width;
}
void displayData(double len, double wid, double area) {
       cout << "\n--- Rectangle Calculation ---" << endl;
    cout << "Length: " << len << " ft." << endl;
    cout << "Width:  " << wid << " ft." << endl;
     
    
    cout << "The total area of the rectangle is: " << area << " sq. ft." << endl;
    
   return;
}
