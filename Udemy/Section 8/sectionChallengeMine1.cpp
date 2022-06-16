//Section 8 - Challange

/*

    The challange program, needs to take cents and convert it into dollars, quarters, dimes and so on. The out put needs to be returned to the user.
    
    US Coin Conversion Chart:
        1 Dollar is 100
        1 Quater is 25 cents
        1 Dime is 10 cents
        1 Nickle is 5 cents
        1 Penny is 1 cent.

    Info: 
    This is a longer more verbose attempt. 

*/

#include <iostream>

int main() {

    const int centsToDollar{100}, centsToQuater{25}, centsToDime{10},centsToNickle{5};

    int cents{0};

    std::cout << "Enter an amount of cents to convert: ";
    std::cin >> cents;
    std::cout << std::endl;

    int totalDollars{0};
    int remainder{0};

    totalDollars = cents / centsToDollar; 
    remainder = cents % centsToDollar;
    std::cout << "Dollar DEBUG >>> var remainder = " << remainder << std::endl;

    int totalQuaters{0};

    totalQuaters = remainder / centsToQuater;
    remainder %= centsToQuater; // Compound Assignment: remainder = remainder % centsToQuater;
    std::cout << "Quater DEBUG >>> var remainder = " << remainder << std::endl;

    int totalDimes{0};

    totalDimes = remainder / centsToDime;
    remainder %= centsToDime;
    std::cout << "Dime DEBUG >>> var remainder = " << remainder << std::endl;

    int totalNickles{0};

    totalNickles = remainder / centsToNickle;
    remainder %= centsToNickle;
    std::cout << "Nickle DEBUG >>> var remainder = " << remainder << std::endl;

    std::cout << std::endl;

    std::cout << "Change to be provided as follows: " << std::endl;
    std::cout << "=================================" << std::endl;
    std::cout << "Dollars: " << totalDollars << std::endl; 
    std::cout << "Quaters: " << totalQuaters << std::endl; 
    std::cout << "Dimes: " << totalDimes << std::endl; 
    std::cout << "Nickles: " << totalNickles << std::endl;
    std::cout << "Pennies: " << remainder << std::endl; // No need to do penny calculation, just print remainder.
}
