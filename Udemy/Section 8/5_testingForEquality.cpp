//Section 8 - Testing for equality.

#include <iostream>

int main() {

    bool displayBool {false};

    std::cout << std::boolalpha; // Use boolalpha to dislay the alpha version of true and false.

    std::cout << displayBool << std::endl; //false
    std::cout << std::endl; 
    
    //

    bool equalResult {false};
    bool notEqualResult; 

    int num1{}, num2{};

    std::cout << "Please enter two integers seperated by a space: ";
    std::cin >> num1 >> num2;

    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);

    std::cout << "Comparison result (equals): " << equalResult << std::endl; //Depending on user input (true or false)
    std::cout << "Comparison result (not equals): " << notEqualResult << std::endl; //Depending on user input (true or false)
    std::cout << std::endl; 
    
    //

    char char1{}, char2{};

    std::cout << "Please enter two characters seperated by a space: ";
    std::cin >> char1 >> char2;

    equalResult = (char1 == char2);
    notEqualResult = (char1 != char2);

    std::cout << "Comparison result (equals): " << equalResult << std::endl; //Depending on user input (true or false)
    std::cout << "Comparison result (not equals): " << notEqualResult << std::endl; //Depending on user input (true or false)
    std::cout << std::endl; 
    
    //

    double double1{}, double2{};

    std::cout << "Please enter two doubles seperated by a space: ";
    std::cin >> double1 >> double2;

    equalResult = (double1 == double2);
    notEqualResult = (double1 != double2);

    std::cout << "Comparison result (equals): " << equalResult << std::endl; //Depending on user input (true or false)
    std::cout << "Comparison result (not equals): " << notEqualResult << std::endl; //Depending on user input (true or false)
    std::cout << std::endl;

    //

    int num3{};
    double double3{};

    std::cout << "Please enter an integer and a double seperated by a space: ";
    std::cin >> num3 >> double3;

    equalResult = (num3 == double3);
    notEqualResult = (num3 != double3);

    std::cout << "Comparison result (equals): " << equalResult << std::endl; //Depending on user input (true or false)
    std::cout << "Comparison result (not equals): " << notEqualResult << std::endl; //Depending on user input (true or false)
    std::cout << std::endl;

    return 0;
}
