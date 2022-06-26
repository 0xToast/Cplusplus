// Section 10 - C-style strings continued

#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> //for character-based functions

int main() {

    char fullName [50] {};
    char temp [50] {};

    // std::cout << "----------------------" << std::endl;
    // std::cout << "Enter your full name: ";
    // std::cin >> fullName;

    // std::cout << "Your full name is " << fullName << std::endl; // The output will cut off from the space inbetween your first and last name.

    std::cout << "Enter your full name again: ";
    std::cin.getline(fullName, 50); // Use cin.getline() method to include white spaces
    std::cout << "Your full name is " << fullName << std::endl;

    std::cout << "----------------------" << std::endl;
    strcpy(temp, fullName);
    
    // strcmp(), if same = 0 (true) / However it will return a differnt number if they are not (1 or -1)
    if (strcmp(temp, fullName) == 0)
        std::cout << temp << " and " << fullName << " are the same" << std::endl; 
    else 
        std::cout << temp << " and " << fullName << " are not the same" << std::endl;
    
    std::cout << "----------------------" << std::endl; 

    // Remember strlen() returns values that are of size_t and not integers
    // Also, strings are basically arrays, thus we need to use arrary syntax when using c-stle strings
    for (size_t i {0}; i < strlen(fullName); ++i) {
        if(isalpha(fullName[i]))
            fullName[i] = toupper(fullName[i]);
    }
    std::cout << "Your full name is " << fullName << std::endl;

    std::cout << "----------------------" << std::endl;

    if (strcmp(temp, fullName) == 0)
        std::cout << temp << " and " << fullName << " are the same" << std::endl;
    else
        std::cout << temp << " and " << fullName << " are not the same" << std::endl;

    std::cout << "----------------------" << std::endl;
    std::cout << "Result of comparing " << temp << " to " << fullName << ": " << strcmp(temp, fullName) << std::endl;
    std::cout << "Result of comparing " << fullName << " to " << temp << ": " << strcmp(fullName, temp) << std::endl;

    return 0;
}
