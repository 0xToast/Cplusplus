// Section 11 - Overloading Functions

#include <iostream>
#include <cmath>

// Function Prototypes
double calculateArea (double);
double calculateArea (double, double);

// Function Definitions
double calculateArea (double x){                // Calculate area of square
    std::cout
        << "The area of the square is: ";
    return pow(x, 2);
}

double calculateArea (double x, double y){      // Calculate area of rectangle
    std::cout
        << "The area of the rectangle is: ";
    return x * y;
}

int main (){
    
  std::cout
        << calculateArea(27, 45);
    
  return 0;
}
