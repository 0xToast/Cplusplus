// Section 11 - Overloading Functions

#include <iostream>
#include <string>
#include <vector>

// Function Prototypes
void print (int);
void print (double);
void print (std::string);
void print (std::string, std::string);
void print (std::vector<std::string>);

// Function Definitions 
void print (int num) {
    std::cout 
        << "Printing int: " << num << "\n";
}

void print (double num) {
    std::cout 
        << "Printing double: " << num << "\n";
}

void print (std::string s) {
    std::cout 
        << "Printing string: " << s << "\n";
}

void print (std::string s, std::string t) {
    std::cout
        << "Printing 2 strings" << s << " and " << t << "\n";
}

void print(std::vector<std::string> v){
    std::cout
        << "Printing vector of strings: ";
    for (auto s : v)
        std::cout
            << s + " ";
    std::cout 
        << "\n"; 
}

int main (){
    print(100);                     // int
    print ('A');                    // character is always promoted to int, should print 65 ASCII ('A')

    print(123.5F);                  // double 
    print(123.5F);                  // Float (F makes the value of floating type)
                                    // However, there is no function that expects a float. So it is promoted to a double.

    print("C-Style string");        // C-Style string is converted to a C++ string
                                    // However, this done as there is no function expecting a c-stlye string
    std::string s {"C++ String"};
    print(s);                       // C++ string object

    print("C-Style string", s);     // First argument is converted to a C++ string

    std::vector<std::string> threeStooges {"Larry", "Moe", "Curly"};
    print(threeStooges);            // Vector

    std::cout 
        << "\n";
    
    return 0;
}
