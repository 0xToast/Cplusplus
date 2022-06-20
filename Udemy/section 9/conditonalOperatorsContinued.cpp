// Section 9 - Conditonal Operator Continued

#include <iostream>

int main() {

    int num {};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << num << " is even" << std::endl;
    else 
        std::cout << num << " is odd" << std::endl;

    // Same as above, using the contional pperator
    std::cout << num << " is " << ((num % 2 == 0) ? "even":"odd") << std::endl;

    //

    int num1{}, num2{};

    std::cout << "\nEnter two integers seperated by a space: ";
    std::cin >> num1 >> num2;

    if (num1 != num2){
        std::cout << "Largest number: " << ((num1 > num2) ? num1 : num2) << std::endl;
        std::cout << "Smallest number: " << ((num1 < num2) ? num1 : num2) << std::endl;

    } else {
        std::cout << "The numbers entered are the same." << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
