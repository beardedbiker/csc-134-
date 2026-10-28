// CSC 134
// M4T1 - While
// Herfendal
// 28 Oct 2026


#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count = count +1;
    }
    const int MIN_NUMBER = 1,  // Startin number to square
              MAX_NUMBER = 10; // Maximim number to square 

    int num = MIN_NUMBER;       // Counter

    cout << "Number Number Squared\n";
    cout << "------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) <<endl;
        num++; //Increment the counter.
    }
    return 0; // done
}