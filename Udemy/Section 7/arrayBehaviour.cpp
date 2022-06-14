// Section 7 Extra Notes on Array Behaviour

#include <iostream>
using namespace std;

int main() {
    int arrayTest [5];

    cout << "\nIndex 0 of arrayTest is: " << arrayTest[0] << endl; // Random data
    cout << "Index 1 of arrayTest is: " << arrayTest[1] << endl; // Random data
    cout << "Index 2 of arrayTest is: " << arrayTest[2] << endl; // Random data
    cout << "Index 3 of arrayTest is: " << arrayTest[3] << endl; // Random data
    cout << "Index 4 of arrayTest is: " << arrayTest[4] << endl; // Random data

    int arrayTest2 [5] {0}; // initialised all elements to 0

    cout << "\nIndex 0 of arrayTest2 is: " << arrayTest2[0] << endl; // 0
    cout << "Index 1 of arrayTest2 is: " << arrayTest2[1] << endl; // 0
    cout << "Index 2 of arrayTest2 is: " << arrayTest2[2] << endl; // 0
    cout << "Index 3 of arrayTest2 is: " << arrayTest2[3] << endl; // 0
    cout << "Index 4 of arrayTest2 is: " << arrayTest2[4] << endl; // 0

    int arrayTest3 [5] {1}; // Only sets first element to 1 and the rest is initialised to 0

    cout << "\nIndex 0 of arrayTest3 is: " << arrayTest3[0] << endl; // 1
    cout << "Index 1 of arrayTest3 is: " << arrayTest3[1] << endl; // 0
    cout << "Index 2 of arrayTest3 is: " << arrayTest3[2] << endl; // 0
    cout << "Index 3 of arrayTest3 is: " << arrayTest3[3] << endl; // 0
    cout << "Index 4 of arrayTest3 is: " << arrayTest3[4] << endl; // 0

    int arrayTest4 [5] {1,2}; // To set elements to specific values you will need to initialise them.

    cout << "\nIndex 0 of arrayTest4 is: " << arrayTest4[0] << endl; // 1
    cout << "Index 1 of arrayTest4 is: " << arrayTest4[1] << endl; // 2
    cout << "Index 2 of arrayTest4 is: " << arrayTest4[2] << endl; // 0
    cout << "Index 3 of arrayTest4 is: " << arrayTest4[3] << endl; // 0
    cout << "Index 4 of arrayTest4 is: " << arrayTest4[4] << endl; // 0

    return 0;
}
