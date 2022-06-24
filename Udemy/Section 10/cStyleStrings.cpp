// Section 10 - C-style strings

#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> //for character-based functions

int main() {

    // char blah [20]; - It is best practice to initalise strings, but not compulsory
    char firstName [20] {};
    char lastName [20] {};
    char fullName [50] {};

    std::cout << firstName << std::endl; // Will likely display nothing or garbage

    std::cout << "Please enter your first name: ";
    std::cin >> firstName;

    std::cout << "Please enter your last name: ";
    std::cin >> lastName;
    std::cout << "----------------------" << std::endl;

    // Size returned by the strlen() method are size_t and not integers
    std::cout << "Hello " << firstName << " your first name has " << strlen(firstName) << " characters" << std::endl;
    std::cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters" << std::endl;

    strcpy(fullName, firstName);        // copy firstName to fullName
    strcat(fullName, " ");              // concatenate fullName and a space
    strcat(fullName, lastName);         // concatenate lastName to fullName
    std::cout << "Your full name is " << fullName << std::endl;

    return 0;
}
