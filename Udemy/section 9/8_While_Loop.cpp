// Section 9
// While Loop

#include <iostream>

using namespace std;

int main () {

    // Example 1
    int num{};
    cout << "Enter a postive number to start the count down: ";
    cin >> num;
    
    while (num >= 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl; // 3 2 1 Blastoff!

    // Example 2 
    int num {};
    cout << "Enter a postive number to count up to: ";
    cin >> num;
    
     int i{1};
     while (num >= i) {
         cout << i << endl;
         i ++;
    } 
    cout << "This line executes when you break out of the while loop";

    // Example 3
    int number {};
    
    cout << "Enter a number between 0 to 100: ";
    cin >> number;
    
    while (number > 100 || number < 0) { 
        cout << "Enter a number between 0 to 100: ";
        cin >> number;
    }
    
    cout << "\nValid number selected." << endl;

    // Example 4 
    bool done {false};
    int number {0};

    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number < 1 || number > 5)
            cout << "Out of range, try again." << endl;
        else {
            cout << "Valid number selected" << endl;
            done = true;
        }
    }

    cout << endl;
    return 0;
}
