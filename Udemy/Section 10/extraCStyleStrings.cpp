// Section 10 - C-style strings exercises, cause I felt like it.

#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> //for character-based functions

int main() {

    char firstName [7] {"Donald"}; // Initialise 1 character higher to accommodate the null character \0
    char lastName [6] {"Trump"};  // Initialise 1 character higher to accommodate the null character \0
    char wholeName [50];

    int firstNameLength = strlen(firstName); 
    int lastNameLength = strlen(lastName); 

    std::cout << "First name is " << firstNameLength << " charcters long."<< std::endl;
    std::cout << "Last name is " << lastNameLength << " charcters long."<< std::endl;

    // Copy firstName to wholeName variable
    strcpy(wholeName, firstName);
    
    // Concatenate a space to wholeName 
    strcat(wholeName, " ");

    // Concatenate lastName to wholeName
    strcat(wholeName, lastName);

    std::cout << std::endl;
    std::cout << "The wholeName variable is now " << wholeName << std::endl;

    std::cout << std::endl;

    // Decided to add this just for fun. I want looping to become muscle memory in my reptilian brain
    // Extra note, if you dont want to use size_t, convert wholeName to an int using static_cast<int> or define it as an int variable.
  
    for (size_t i {0}; i < strlen(wholeName); i++)
        if(isalpha(wholeName[i]))
            wholeName[i] = toupper(wholeName[i]);

    std::cout << "The wholeName variable is now all uppercased: " << wholeName << std::endl;

    return 0;
}
