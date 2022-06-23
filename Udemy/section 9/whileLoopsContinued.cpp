// Section 9 - While Loops Continued

#include <iostream>
#include <unistd.h> // added this to inlcude the sleep function.

int main() {

    // While loop that counts down
    int num {};
    
    std::cout << "Enter a positive integer to start the count down: ";
    std::cin >> num;

    while (num > 0) {
        sleep(1); // Adds a 1 second delay before printing to console
        std::cout << num << std::endl;
        --num; 
    }
    std::cout << "Blastoff!" << std::endl;
    std::cout << std::endl;

    // While loop that counts up
    int num2{};
    std::cout << "Enter a positive integer to count up to: "; // Duplicated code is usually an indication that it could be written better
    std::cin >> num2;

    int i {1};
    while (num2 >= i) {
        sleep(1); // Adds a 1 second delay before printing to console
        std::cout << i << std::endl;
        i++; 
    }
    std::cout << std::endl;

    // Input validation - Basic Example

    int num3 {};
    std::cout << "Enter an integer less than 100: ";
    std::cin >> num3;

    while (num3 >= 100) { //Can also be done like this !(number < 100)
        std::cout << "\nEnter an integer less than 100: ";
        std::cin >> num3; 
    }
    std::cout << "\nValid number selected." << std::endl;
    std::cout << std::endl; 

    // While Loop - Boolean Example

    bool done {false};
    int num4 {0};

    // while NOT done
    while (!done) {
        std::cout << "Enter an integer between 1 and 5: ";
        std::cin >> num4;

        if (num4 <=1 || num4 >=5)
            std::cout << "[!] Error - Selection out of range, please try again!\n" << std::endl;
        else {
            std::cout << "\nValid number selected." << std::endl;
            done = true; // Important! Otherwise we will never break out of the statement.
        } 
    }

    std::cout << std::endl;  
    return 0;
}
