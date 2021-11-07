// Relational Operators

#include <iostream>

using namespace std;

int main() {

    int num1{},num2{};

    cout << boolalpha; // will display true/false instead of 1 or 0 for boolean results.
    cout << "Enter 2 integers seperated by a space:";
    cin >> num1 >> num2;
    
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl; //false
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl; //false 
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl; //true
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl; //true
    
    return 0;
  
}
