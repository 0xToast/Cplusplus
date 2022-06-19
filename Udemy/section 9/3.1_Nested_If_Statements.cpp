// Section 9 - Nested if statements - Shipping cost calculator

/*
    Shipping cost calulator

    Ask the user for package dimensions in inches
    lenght, width, height

    All dimensions must be 10 inches or less, otherwise shipment cannot take place
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    if package colume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip> // Used to make values more precise

int main() {

    int length{0}, width{0}, height{0};
    const int maxDimension {10};
    double baseCost{2.50};

    const int tier1Threshold {100};
    const int teir2Threshold{500};

    const double tier1Surcharge {0.10}; // 10% extra
    const double tier2Surcharge {0.25}; // 25% extra

    std::cout << "\n==================================";
	std::cout << "\n|   Company X Package Calulator. |";
	std::cout << "\n==================================";
	std::cout << std::endl;
	std::cout << "\nPlease enter the package length, width and hieght seperated by spaces: ";
	std::cin >> length >> width >> height;

    // Checks if package dimensions for a value larger than.
    if (length > maxDimension || width > maxDimension || height > maxDimension) {
        std::cout << "\n[!] Package rejected - dimension limit exceeded!"  << std::endl;
    } 
    
    else {
        double packageCost {0};
        int packageVolume{0};

        packageVolume = length * width * height;
        packageCost = baseCost;

        // Checks if package is > 500 cubic inches
        if (packageVolume > teir2Threshold){
            packageCost += packageCost * tier2Surcharge;
            std::cout << "\n[+] Applying Tier 2 Surcharge..." << std::endl;
        } 
        
        // Checks if package is > 100 cubic inches
        else if (packageVolume > tier1Threshold){
            packageCost += packageCost * tier1Surcharge;
            std::cout << "\n[+] Applying Tier 1 Surcharge..." << std::endl;
        }

        std::cout << "\nThe volume of your package is: " << packageVolume << " cubic inches."<< std::endl;
        std::cout << std::fixed << std::setprecision(2); // Part of <iomanip> library. Used to set decimal precision
        std::cout << "Your package will cost $" << packageCost << std::endl;
    }

    std::cout << std::endl;
    return 0; 
}
