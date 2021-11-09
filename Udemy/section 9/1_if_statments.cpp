// section 9 - if statements  

#include <iostream>

using std::cout; // Added these spererately just to get used to not adding the whole std library.
using std::cin;
using std::endl;

int main() {

    int num {0};
    const int min{10};
    const int max {100};

    cout << "\nPlease enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min) {
        cout << "\n=================== if statment 1 ================" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << "\n=================== if statment 2 ================" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;

    }

    if (num >= min && num <= max) {
        cout << "\n=================== if statment 3 ================" << endl;
        cout << num << " is in range of " << min << "-" << max << endl;
        cout << "This means statement 1 and 2 must also display!!" << endl;
    }

    if (num == min || num == max) {
        cout << "\n=================== if statment 4 ================" << endl;
        cout << num << " is on a boundary number"<< endl;
        cout << "This also means that all 4 statements will be true and display!!!" << endl;
    }

    cout << endl;
    return 0;
}
