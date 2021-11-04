// Arithmetic operators
/*
    + Addition
    - Subtraction
    * Mulitplication
    / Divsion
    % modulo (only works with ints)

    Another thing to understand with C++ it uses PEMDAS (For precedence)

    1. Parenthesis
    2. Exponents
    3. Multiplication / Divison
    4. Addition / Subtraction

*/

#include <iostream>

using namespace std;

int main() {

    int num1 {200};
    int num2 {100};

    // Simple addtion logic/syntax
    cout << num1 << " +  " << num2 << " = " << num1 + num2 << endl;

    // Another example of simple addition logic/syntax
    int result{0};

    result = num1 + num2;
    cout << num1 << " +  " << num2 << " = " << result << endl;

    // Simple example of subtraction
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    // Simple example of multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    // Simple example of Division
    result = num1 * num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // Simple example of the modulo operator (remainder of)
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl; // 200 / 100 = 2 with a remainder of "zero" (will only print remainder value) // 0

    // Another example of the modulo operator (remainder of)
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl; // 10 / 3 = 3 with a remainder of 1 (will only print remainder value) // 1

    return 0;
}