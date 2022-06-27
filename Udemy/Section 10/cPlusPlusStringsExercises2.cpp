// Section 10 - C++ strings Exercise 2

#include <iostream>
#include <string> 

int main() {

    std::string journalEntry1 {"Issac Newton"};
    std::string journalEntry2 {"Leinbniz"};

    journalEntry1.erase(0,6);

    // ASCII Chart Values
    // I = 73
    // L = 76

    // This if statement alphabetically sorts journalEntry1 & journalEntry2 based on the ASCII values
    if (journalEntry2.at(0) < journalEntry1.at(0))
        // If the first letter of journalEntry2 is less that the value of journalEntry1 first letter, then swap the them around so they appear alphabetically.
        journalEntry2.swap(journalEntry1);

    std::cout << journalEntry1 << "\n" << journalEntry2 << std::endl;

}
