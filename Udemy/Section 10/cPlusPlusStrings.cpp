// Section 10 - Working with C++ strings

#include <iostream>
#include <string> // Need to include the string library when using C++ strings

int main() {

    std::string s0;
    std::string s1 {"Apple"};
    std::string s2 {"Banana"};
    std::string s3 {"Kiwi"};
    std::string s4 {"apple"};
    std::string s5 {s1};            // Apple
    std::string s6 {s1, 0, 3};      // Starts at index 0 and takes 3 characters from inddex 0 - App
    std::string s7 (10, 'X');       // XXXXXXXXXX

    std::cout << s0 << std::endl; // Blank, no garbage - unlike c-style strings
    std::cout << s0.length() << std::endl; // Empty string - 0

    // Initialisation
    std::cout << "\nInitialisation" << "\n--------------------------" << std::endl;
    std::cout << "s1 is initialised to: " << s1 << std::endl;
    std::cout << "s2 is initialised to: " << s2 << std::endl;
    std::cout << "s3 is initialised to: " << s3 << std::endl;
    std::cout << "s4 is initialised to: " << s4 << std::endl;
    std::cout << "s5 is initialised to: " << s5 << std::endl;
    std::cout << "s6 is initialised to: " << s6 << std::endl;
    std::cout << "s7 is initialised to: " << s7 << std::endl;

    // Comparison - These calculations take the ASCII chart into consideration when deducing the result. 
    // https://alpharithms.s3.amazonaws.com/assets/img/ascii-chart/ascii-table-alpharithms-scaled.jpg 
    std::cout << "\nComparison" << "\n--------------------------" << std::endl;
    std::cout << std::boolalpha;
    std::cout << s1 << " == "  << s5 << ": " << (s1 == s5) << std::endl; // Apple == Apple: true
    std::cout << s1 << " == "  << s2 << ": " << (s1 == s2) << std::endl; // Apple == Banana: false
    std::cout << s1 << " != "  << s2 << ": " << (s1 != s2) << std::endl; // Apple != Banana: true
    std::cout << s1 << " < "  << s2 << ": " << (s1 < s2) << std::endl; // Apple < Banana: true
    std::cout << s2 << " > "  << s1 << ": " << (s2 > s1) << std::endl; // Banana > Apple: true
    std::cout << s4 << " < "  << s5 << ": " << (s4 < s5) << std::endl; // apple < Apple: false
    std::cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << std::endl; // Apple == Apple: true

    // Assignment
    std::cout << "\nAssignment" << "\n--------------------------" << std::endl;

    s1 = "Watermelon";
    std::cout << "s1 is now: " << s1 << std::endl; // Watermelon

    s2 = s1;
    std::cout << "s2 is now: " << s2 << std::endl; // Watermelon

    s3 = "Frank";
    std::cout << "s3 is now: " << s3 << std::endl; // Frank

    s3 [0] = 'C'; 
    std::cout << "First letter of s3 changed to \"C\": " << s3 << std::endl; // Crank

    s3.at(0) = 'P';
    std::cout << "First letter of s3 changed to \"P\": " << s3 << std::endl; // Prank

    // Concatenation
    std::cout << "\nConcatination" << "\n--------------------------" << std::endl;
    s3 = "Watermelon";
    
    // if you want to add 2 C-style literals like "nice" and "cold" together, then you would need to use the strcat()
    //s3 = "nice" + " cold" + s5 + "juice"; // Compiler error

    // The reason why this works is s5 is an object, that allows concatenation using the addtion operator. 
    s3 = s5 + " and " + s2 + " juice"; // Apple and Banana juice
    std::cout << "s3 is now: " << s3 << std::endl; // Apple and Banana juice

    // Looping
    std::cout << "\nLooping" << "\n--------------------------" << std::endl;

    s1 = "Apple";

    for (size_t i (0); i < s1.length(); ++i)
        std::cout << s1.at(i);  // or s1[i] - Apple
    std::cout << std::endl;

    // Range-based for loop
    for (char c : s1)
        std::cout << c;
    std::cout << std::endl;

    // Substring
    std::cout << "\nSubstring" << "\n--------------------------" << std::endl;
    s1 = "This is a test";

    std::cout << s1.substr(0,4) << std::endl; // This
    std::cout << s1.substr(5,2) << std::endl; // is
    std::cout << s1.substr(10,4) << std::endl; // test

    // Erase
    std::cout << "\nSubstring" << "\n--------------------------" << std::endl;
    s1 = "This is a test";

    s1.erase(0,5); // Erase This from s1
    std::cout << "s1 is now: " << s1 << std::endl;

    // Get line
    std::cout << "\nSubstring" << "\n--------------------------" << std::endl;

    std::string fullName {};

    // getline() does not stop at the white space. Similar to cin.getline() for c-style strings.
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Your full name is: " << fullName << std::endl;

    // Find 

    std::cout << "\nFind" << "\n--------------------------" << std::endl;

    s1 = "The secret word is Toast";
    std::string word {};

    std::cout << "Enter a word to find: ";
    std::cin >> word;

    size_t position = s1.find(word);
    if (position != std::string::npos)
        std::cout << "Found " << word << " at position: " << position << std::endl; 
    else
        std::cout << "Sorry, " << word << " not found" << std::endl;

    std::cout << std::endl;
    return 0;
}
