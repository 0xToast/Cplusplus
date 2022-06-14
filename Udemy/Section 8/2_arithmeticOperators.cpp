//Section 8 - Arithmetic Operators

/*
    + Addition
    - Subtraction
    * Mulitplication
    / Divsion
    % modulo/remainder of (only works with ints)
    
    +, -, * and / operators can work with multiple types such as in double etc, this means they are overloaded.

    Another thing to understand with C++ it uses PEMDAS (For precedence)

    1. Parenthesis
    2. Exponents
    3. Multiplication / Divison
    4. Addition / Subtraction
*/

#include <iostream>

int main() {

    int num1 {200};
    int num2 {100};

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl; // 200 + 100 = 300

    std::cout << std::endl; 
    
    //

    int result {0};
    result = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << result << std::endl; // 200 + 100 = 300

    result = num1 - num2;
    std::cout << num1 << " - " << num2 << " = " << result << std::endl; // 200 - 100 = 100

    result = num1 * num2;
    std::cout << num1 << " * " << num2 << " = " << result << std::endl; // 200 * 100 = 20000

    result = num1 / num2;
    std::cout << num1 << " / " << num2 << " = " << result << std::endl;  //200 / 100 = 2

    result = num2 /num1;
    std::cout << num2 << " / " << num1 << " = " << result << std::endl; // 100 / 200 = 0 - The result variable is an int, so the .5 will be omitted. Use doubles for more precision.
    
    // Simple example of the modulo operator (remainder of). Remeber the modulo operator only works with integers only. 
    result = num1 % num2;  
    std::cout << num1 << " % " << num2 << " = " << result << std::endl; //200 % 100 = 0 
    // Note: (200 + 100 = 2 with a remainder of 0, zero is the remainder/modulo. Modulo will only print out the remainder value)

    // Another modulo example
    num1 = 10;
    num2 = 3;
    result = num1 % num2;

    std::cout << num1 << " % " << num2 << " = " << result << std::endl; // 10 % 2 = 1
    // Note: (10 / 3 = 3 with a remainder of 1)

    // Other examples on using arithmetic operators
    result = num1 * 10 + num2;
    std::cout << result << std::endl; //103

    std::cout << 5/10 << std::endl; //0

    std::cout << 5.0/10.00 << std::endl; //0.5

    return 0;
}
