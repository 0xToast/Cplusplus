// Section 9 - Do While Loops Basics

#include <iostream>

int main() {

    // Do While Loop - Basic Example

    int number {};
    do {
        std::cout << "Enter an integer between 1 and 5: ";
        std::cin >> number;
        
    } while (number <=1 || number >=5); // While input is less than 1 or greater than 5. Keep excuting the statement
    std::cout << "Valid number selected." << std::endl;

    // Do While Loop - Complex

    char selection {};

    do {
        double width{}, height{};
        std::cout << "\nEnter width and height separated by a space: ";
        std::cin >> width >> height;

        double area {width * height};
        std::cout << "The area is " << area << std::endl;

        std::cout << "\nCalculate another? (Y/N): ";
        std::cin >> selection;  
    } while (selection == 'Y' || selection == 'y');
    std::cout << "\nProgram Terminating..." << std::endl;

    std::cout << std::endl;  
    return 0;
}
