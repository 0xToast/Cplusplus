//Section 8 - Mixed type expressions and casting 

#include <iostream>

int main() {

    // Explicit Type Casting
    //
    // Problem Statement: 
    // In the below piece of code, average will only be displayed as 12 and not 12.5. We need it to be displayed showing the decimal points
    // We could just change the types of the integer variables to double, but we are modeling a fictional usecase were integers are more approproiate 

    int totalAmount {100};
    int totalNumber {8};
    double average {0.0};

    average = totalAmount / totalNumber;
    std::cout << "Before type casting: " << std::endl;
    std::cout << "average = "<< average << std::endl; //Only displays 12
    std::cout << std::endl;

    // We can use casting to convert totalAmount to the double type to achieve our desired result.
    average = static_cast<double>(totalAmount) / totalNumber;
    std::cout << "After type casting: " << std::endl;
    std::cout << "average = " << average << std::endl; //Displays 12.5
    std::cout << std::endl;

    // In older C++ code Casting looked like this
    average = (double)totalAmount / totalNumber; // We do not use this way of casting in modern C++

    // To understand this concept a bit better I looked at more examples
    // Got the following example off: https://www.ibm.com/docs/en/zos/2.2.0?topic=expressions-static-cast-operator-c-only

    int j = 41;
    int v = 4;
    float m = j/v;
    float d = static_cast<float>(j)/v;
    
    std::cout << "Before type casting: " << std::endl;
    std::cout << "m = " << m << std::endl; //10
    std::cout << std::endl;
    std::cout << "After type casting: " << std::endl;
    std::cout << "d = " << d << std::endl; //10.25
   
    return 0;
}
