//Section 8 - Logical Operators

/*

!/not: negation
&&/and: logical and
||/or: logical or 

Can be expressed using the keywords or symbols

*/

#include <iostream>

int main() {

    // Determines if user input is within bounds
    int num {};
    const int lowerThreshold{10};
    const int upperThreshold{20};

    std::cout << std::boolalpha; // Print alpha representation of true/false.

    std::cout << "Enter an integer between " << lowerThreshold << " and " << upperThreshold << ": ";
    std::cin >> num;
    std::cout << std::endl;

    bool withinBounds {false};

    // Note: both conditions need to be True for the entire statement to be true 
    withinBounds = (num > lowerThreshold && num < upperThreshold);
    std::cout << num << " is between " << lowerThreshold << " and " << upperThreshold << ": " << withinBounds << std::endl; // true or false depending on the user's input.
    std::cout << std::endl;

    //

    // Determines if user input is out of bounds
    bool outOfBounds {false};

    // Note: One condition needs to be true for the entire statement to be true
    outOfBounds = (num < lowerThreshold || num > upperThreshold);
    std::cout << num << " is outside of " << lowerThreshold << " and " << upperThreshold << ": " << outOfBounds << std::endl; // true or false depending on the user's input.
    std::cout << std::endl;

    //

    // Determines if user input is on the boundary

    bool onBoundary {false};
    onBoundary = (num == lowerThreshold || num == upperThreshold);
    std::cout << "Is " << num << " on the boundary of " << lowerThreshold << " and " << upperThreshold << ": " << onBoundary << std::endl; // true or false depending on the user's input.
    std::cout << std::endl;

    //

    // Exercise - Determine if you need to wear a coat based on temprature and wind speed

    bool wearCoat {false};
    double currentTemp {0.0}; // Farenheit 
    int windSpeed{0}; // Miles per hour

    // User is required a coat if wind speed is too high OR temperature is too low.
    const double tempThreshold {45}; // Farenheit 
    const int windSpeedThreshold {25}; // Miles per hour
    
    std::cout << "Enter the current temperature (F): ";
    std::cin >> currentTemp;
    std::cout << "Enter windspeed (mph): ";
    std::cin >> windSpeed;
    std::cout << std::endl;

    // Note: One condition needs to be true for the entire statement to be true
    wearCoat = (currentTemp < tempThreshold || windSpeed > windSpeedThreshold);
    std::cout << "Do you need to wear a coat? (Using OR): " << wearCoat << std::endl;

    // Note: both conditions need to be True for the entire statement to be true 
    wearCoat = (currentTemp < tempThreshold && windSpeed > windSpeedThreshold);
    std::cout << "Do you need to wear a coat? (Using AND): " << wearCoat << std::endl;
    std::cout << std::endl;

    return 0;
}


// Another random example using parentheses
void logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {
    
    if ((age >= 18 || (age >= 16 && parental_consent)) && ssn && !accidents)
        std::cout << "Yes, you can work.";
    
}
