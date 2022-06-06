//Section 6 local variables, global variables and constants

#include <iostream>
using namespace std;

// int global {0}; -- In this example, this is a global variable
// Note: Local variables to presedence over global variables if the same identifier is used

int main () { 

    int roomWidth {0}; //-- In this example, these are local variables
    int roomLength {0}; 

    cout << "Enter the width of the room (m): ";
    cin >> roomWidth;

    cout << "Enter the length of the room (m): ";
    cin >> roomLength;

    cout << "\nThe area of the room is " << roomLength * roomWidth << " square meters." << endl;
    
    return 0;    
}