// Section 11 - What is a function? - cmath lib

/* 

I have opted to drop the excessive use of std::endl due to the following:
    - https://en.cppreference.com/w/cpp/io/manip/endl - "Use of std::endl in place of '\n', encouraged by some sources, may significantly degrade output performance."

Furthermore, I have changed the way I write some of my statements to increase readability of my code.
    - https://en.cppreference.com/w/cpp/numeric/math/cbrt

*/

#include <iostream>
#include <cmath>

int main() {

    double num {};
    std::cout 
        << "Enter a number (double): ";
    std::cin 
        >> num;
    std::cout
        << "\n";

    std::cout 
        << "The sqrt of " << num << "is: " << sqrt(num) << "\n"
        << "The cubed root of " << num << "is: "  << cbrt(num) << "\n"
        << "\n"
        << "The sine of " << num << "is: " << sin(num) << "\n"
        << "The cosine of " << num << "is: " << cos(num) << "\n"
        << "\n"
        << "The ceil of " << num << "is: " << ceil(num) << "\n"
        << "The floor of" << num << "is: " << floor(num) << "\n"
        << "The round of " << num << "is: " << round(num) << "\n";

    double power{};
    std::cout 
        << "\nEnter a power to raise " << num << " to: ";
    std::cin 
        >> power;
    std::cout
        << "\n";
        
    std::cout
        << num << " raised to the " << power << " power is: " << pow(num, power) << "\n";

    std::cout
        << "\n";

        return 0;
}
