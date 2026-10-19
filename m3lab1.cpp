
/*
CSC 134
M3T1 
Herfendal
19 October 2026

*/
// CSC 134
// M3LAB1 - Menus and Choices
// student
// 10/19/26

#include <iostream>
using namespace std;

// ========================================================
// 1. FUNCTION DECLARATIONS (PROTOTYPES)
// Tell the C++ compiler these functions exist before main()
// ========================================================
void chooseDoor1();
void chooseDoor2();

int main() {
  int choice; // menu choice

  // Display the menu
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "1. Choose Door #1" << endl;
  cout << "2. Choose Door #2" << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // Branching: test the user's choice
  if (1 == choice) {
    chooseDoor1();
  }
  else if (2 == choice) {
    chooseDoor2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of main()

// ========================================================
// 2. FUNCTION DEFINITIONS
// Define what each function does after main() has finished
// ========================================================
void chooseDoor1() {
  cout << "You chose: Choose Door #1" << endl;
  cout << "You win ... A NEW HARLEY!" << endl;
  // Double or nothing?
  cout << "The host says ... DOUBLE OR NOTHING???" << endl;
  cout << "1. Keep the Harley" << endl;
  cout << "2. Try Double or Nothing" << endl;
  cout << "? ";
  int choice;
  cin >> choice;
  // TODO: decide what actually happens
  if (choice == 1 ) {
    cout << "Ride home on new harley" << endl;

  }
  else if (choice == 2) {
    cout << "The guys behind you parts list" << endl;

  } 
}

void chooseDoor2() {
  cout << "You chose: Choose Door #2" << endl;
  cout << "You win ... a bottle of floor wax." << endl;
}
