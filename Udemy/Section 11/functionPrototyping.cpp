// Section 11 - Function Prototyping

#include <iostream>
#include <cmath>

// Function prototypes / Forward declerations

// Doesn't matter what order we delclare function when using prototyping
void volumeCylinder ();

// We dont need to specify the parameter name in calcAreaCircle (radius). 
// The C++ compiler doesn't require the parameter name, it only enforces the type of the parameter. However, specifying the parameter name makes it much easier to read.
double calcAreaCircle (double);
double calcVolumeCylinder (double radius, double height); 
void areaCircle ();

const double pi {3.14159};

int main() {
    areaCircle();
    volumeCylinder();
    
    return 0;
}

double calcAreaCircle (double radius) {
    return pi * pow(radius, 2);
}

double calcVolumeCylinder (double radius, double height) {
    return calcAreaCircle(radius) * height;
}

// Notice how the functions are declared after they are called in main(). 
// This is fine as we used function prototyping to declare these functions.

void areaCircle () {
    double radius{};
    std::cout 
        << "\nEnter the radius of the circle: ";
    std::cin 
        >> radius;

    std::cout
        << "\nThe area of a circle with a radius of " << radius << " is: " << calcAreaCircle(radius) << "\n";
}

void volumeCylinder () {
    double radius {};
    double height {};

    std::cout 
        << "\nEnter the radius of the cylinder: ";
    std::cin 
        >> radius;
    std::cout 
        << "Enter the height of the cylinder: ";
    std::cin 
        >> height;

    std::cout 
        << "\nThe volume of the cylinder with radius " << radius  << " and height " << height << " is: " << calcVolumeCylinder(radius, height);
}
