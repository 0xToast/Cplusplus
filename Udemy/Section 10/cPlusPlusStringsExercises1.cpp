// Section 10 - C++ strings Exercise 1

#include <iostream>
#include <string> 

int main() {

    std::string unfromattedFullName {"StephenHawking"};

    std::string firstName {unfromattedFullName.substr(0,7)}; //Stephen
    std::string lastName = unfromattedFullName.substr(7,14); // Hawking

    std::string formattedFullName {};
    
    formattedFullName = firstName + lastName; //StephenHawking 

    formattedFullName.insert(7, " ");

    std::cout << formattedFullName << std::endl; //Stephen Hawking

    std::cout << std::endl;
    return 0;
}
