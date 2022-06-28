// Section 11 - Defining Functions

#include <iostream>
#include <cmath>

const double pi {3.14159};

double calcAreaCircle (double radius) {
    return pi * pow(radius, 2);
}

double calcVolumeCylinder (double radius, double height) {
    return calcAreaCircle(radius) * height;
}

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

int main() {

    areaCircle();
    volumeCylinder();

    return 0;
}
