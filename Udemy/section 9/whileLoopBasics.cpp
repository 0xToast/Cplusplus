// Section 9 - While Loops

#include <iostream>

int main() {

    // Basic Examples 

    int i {1};

    while (i <= 5) {
        std::cout << i << std::endl; // 1 2 3 4 5
        ++i;
    }

    std::cout << std::endl;

    //

    int x {1};{
        if (x % 2 == 0)
            std::cout << x << std::endl; // 2 4 6 8 10
        ++x;
    }

    std::cout << std::endl;

    // While loops using arrarys

    int scores [] {100,90,87};
    int y {0};

    while (y < 3) {
        std::cout << scores[y] << std::endl; // 100 90 87
        ++y; 
    }

    std::cout << std::endl;

    // While loop are commonly used for input validation.

    int num{0};

    std::cout << "Enter an integer less than 100: ";
    std::cin >> num;

    while (num >= 100){ // We can also use this: !(number < 100)
        std::cout << "\nEnter an integer less than 100: ";
        std::cin >> num; 
    }

    std::cout << "\nValid number selected." << std::endl;
    std::cout << std::endl;

    //

    int num2{0};

    std::cout << "Enter an integer between 1 and 5: ";
    std::cin >> num2;

    // We use OR here as we want to test both conditions. If either of these conditions are true the number inputted is not valid.
    while (num2 <=1 || num2 >= 5) {
        std::cout << "Enter an integer between 1 and 5: ";
        std::cin >> num2;
    }

    std::cout << "\nValid number selected." << std::endl;
    std::cout << std::endl;

    // Boolean Example

    bool done {false};
    int number {0};

    while (!done) { // NOT done (!done)
        std::cout << "Enter an integer between 1 and 5: ";
        std::cin >> number;

        if (number <=1 || number >=5)
            std::cout << "[!] Out of range, please try again!" << std::endl;
        else {
            std::cout << "Valid number selected." << std::endl;
            done = true;
        }
   }

    return 0;
}
