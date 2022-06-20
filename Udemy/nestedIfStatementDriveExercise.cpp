// Section 9 - Nested if statements - Can you drive exercise

#include <iostream>

int main() {

    // My attempt

    int age {16};
    const int drivingAge {16};
    bool hasCar {true};

    if (age < drivingAge){
        std::cout << "Sorry, come back in " << drivingAge - age << " years and be sure you own a car when you come back" << std::endl;
    } else {
        if (hasCar)
        std::cout << "Yes - you can drive!" << std::endl;
        else
        std::cout << "Sorry, you need to buy a car before you can drive!" << std::endl;
    }
    std::cout << std::endl;

//===============================================================//    
    
    // Course Solution

    if (age >= drivingAge) {
        if (hasCar) {
            std::cout << "Yes - you can drive!" << std::endl;
        } else {
            std::cout << "Sorry, you need to buy a car before you can drive!" << std::endl;
        }
        
    } else {
        std::cout << "Sorry, come back in " << drivingAge - age << " years and be sure you own a car when you come back." << std::endl;
    }
    
    return 0; 
}
