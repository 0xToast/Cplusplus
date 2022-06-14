//Section 8 Assignment Operator

#include <iostream>

int main() {

    // Study note: Initiialisation is when the variable is decalred and it gets a value for the first time
    int num1 {10}; // Initialising num1 to 10
    int num2 {20}; // Initialising num2 to 20
    int num3 {30}; // Initialising num3 to 30
    int num4 {40}; // Initialising num3 to 40

    // Study note: Assignment is when you change the value that already exists within a variable.
    
    // ASSIGN the value of 100 to num1
    num1 = 100;
    std::cout << "num1: " << num1 << std::endl; //100

    // ASSIGN the value of num2 to num1
    num1 = num2;
    std::cout << "num1: " << num1 << std::endl; //20

    // ASSIGN the value of 1000 to num4, ASSIGN the value of 1000 to num3.
    num3 = num4 = 1000;

    std::cout << "num3: " << num3 << std::endl; //1000
    std::cout << "num4: " << num4 << std::endl; //1000
    std::cout << std::endl;

    return 0;
}
