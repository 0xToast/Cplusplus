// Section 11 - Functions and Prototypes - Exercises

/* 

In this exercise, I leveraged pass-by-value to execute my functions.

Youtube video that helped me understand the pass-by-value concept.
https://www.youtube.com/watch?v=FXzpFn8LJUI

*/

#include <iostream>
#include <cmath> // I leveraged this library to make use of the round() function.

// Function Prototypes
double fahrenheitToCelsius(double temp);
double fahrenheitToKelvin(double temp);

int main (){

    double temp {};

    std::cout
        << "Please input temprature (F) to convert to Celsius and Kelvin: ";
    std::cin 
        >> temp;

   std::cout
        << "\n";

    std::cout
        << temp << "F is eqvalent to " << fahrenheitToCelsius(temp) << "C" << "\n"
        << "\n"
        << temp << "F is eqvalent to " << fahrenheitToKelvin(temp) << "K" << "\n";
}

// Function Definitions 
double fahrenheitToCelsius (double temp){
    return round((5.0/9.0)*(temp - 32)); // Calculation to convert F to C
}

double fahrenheitToKelvin (double temp){
    return round((5.0/9.0)*(temp - 32) + 273); // Calculation to convert F to K 
}
