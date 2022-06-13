//Section 8 - Arithmetic Operators 
// Euro to USD Convertor (Exercise)

#include <iostream>

int main() {

    const double usdPerEuro {1.19};
    double euros{0};
    double usDollars{0};
    
    std::cout << "      ***EUR to USD Convertor***" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the amount of Euros to be converted to USD: ";
    std::cin >> euros;

    usDollars = euros * usdPerEuro;

    std::cout << euros << " Euros is equivalent to " << usDollars << " US Dollars." << std::endl;

    return 0;
}
