//Section 8 - Relational Operators
#include <iostream>

int main() {

    int num1{},num2{};

    //Will display true/false instead of 1 or 0 for boolean results.
    std::cout << std::boolalpha; 

    std::cout << "Enter 2 integers seperated by a space:";
    std::cin >> num1 >> num2;
    
    std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl; //true or false depending on user input
    std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl; //true or false depending on user input 
    std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl; //true or false depending on user input
    std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl; //true or false depending on user input
    
    return 0;
}
