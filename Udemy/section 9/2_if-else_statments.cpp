// section 9 - if-else statements  

#include <iostream>

using std::cout; // Added these spererately just to get used to not adding the whole std library.
using std::cin;
using std::endl;

int main() {

    int num {0};
    const int target{10};

    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;

    if (num >= target){
        cout << "\n==================================" << endl;
        cout << num << " is greater than or equal to " << endl;
        
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n==================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    cout << endl;
    return 0;
}
