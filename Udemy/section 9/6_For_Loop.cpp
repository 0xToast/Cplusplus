// Section 9
// For Loop

#include <iostream>
#include <vector>

using namespace std;

int main () {

    for (int i{1}; i <=10; ++i) 
        cout << i << endl; // 1 2 3 4 5 6 7 8 9 10

    for (int i{1}; i <= 10; i+=2) // increments by 2 
        cout << i << endl; // 1 3 5 7 9

    for (int i{10}; i > 0; --i) // 
        cout << i << endl; // 10 9 8 7 6 5 4 3 2 1 Blast off!
    cout << "Blast off!" << endl; 

    for (int i {10}; i <= 100; i += 10) {
        if (i % 15 == 0) // if devisible by 15
           cout << i << endl; // 30 60 90
    }
    
    // Using the comma operator in for loops 

    for (int i {1}, j {5}; i <= 5; ++i,++j)
        cout << i << " + " << j << " = " << i + j << endl;
    
    // Output:
    //  1 + 5 = 6
    //  2 + 6 = 8
    //  3 + 7 = 10
    //  4 + 8 = 12
    //  5 + 9 = 14

    for (int i {1}; i <= 100; ++i) {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else 
            cout << " ";

    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // 11 12 13 14 15 16 17 18 19 20
    // 21 22 23 24 25 26 27 28 29 30
    // 31 32 33 34 35 36 37 38 39 40
    // 41 42 43 44 45 46 47 48 49 50
    // 51 52 53 54 55 56 57 58 59 60
    // 61 62 63 64 65 66 67 68 69 70
    // 71 72 73 74 75 76 77 78 79 80
    // 81 82 83 84 85 86 87 88 89 90
    // 91 92 93 94 95 96 97 98 99 100

    for (int i {1}; i <= 100; ++i) {
        cout << i;
        cout << ((i % 10 == 0) ? "\n":" ");
    }

    // Output:
    // 1 2 3 4 5 6 7 8 9 10
    // 11 12 13 14 15 16 17 18 19 20
    // 21 22 23 24 25 26 27 28 29 30
    // 31 32 33 34 35 36 37 38 39 40
    // 41 42 43 44 45 46 47 48 49 50
    // 51 52 53 54 55 56 57 58 59 60
    // 61 62 63 64 65 66 67 68 69 70
    // 71 72 73 74 75 76 77 78 79 80
    // 81 82 83 84 85 86 87 88 89 90
    // 91 92 93 94 95 96 97 98 99 100

    //Using a vector
    vector <int> nums {10,20,30,40,50};
    //unsigned is an unsigned int
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl; //10 20 30 40 50

    cout << endl;
    return 0;
}
