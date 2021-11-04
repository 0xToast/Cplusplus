#include <iostream>

using namespace std;

int main() {
    
    // Study note: Initiialisation is when the variable is decalred and it gets a value for the first time.
    int num1 {10}; //initialising num1 to 10
    int num2 {20}; //initialising num1 to 20

    // Study note: Assignment is when you change the value that already exists in a variable.
    //num1 = num2;
    num1 = num2 = 1000;

    cout << "num1 " << num1 << endl;
    cout << "num2 " << num2 << endl;
    cout << endl;

    return 0;
}
