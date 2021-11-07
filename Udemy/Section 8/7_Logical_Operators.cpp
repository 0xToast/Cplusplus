// Logical Operators

#include <iostream>

using namespace std;

int main() {

    // int num{};
    // const int lower{10};
    // const int upper {20};

    cout << boolalpha; // will print true/false to consle instead of 1 or 0 for boolean results.

    // Determine if an entered integer is between two other integers:
    // cout << "Enter an integer between: " << lower << " and " << upper << ": ";
    // cin >> num;
    //
    // bool checkValue{false}; 
    //
    // checkValue = (num >= lower && num <= upper);
    // cout << "Is "<< num << " between " << lower << " and " << upper << ": " << checkValue << endl;
    // return 0;

    // Determine if an entered integer is outside two other integers:
    // cout << "Enter an integer between: " << lower << " and " << upper << ": ";
    // cin >> num;
    //
    // bool outOfBounds {true};
    //
    // outOfBounds = (num < lower || num > upper);
    // cout << "Is "<< num << " outside the range of " << lower << " and " << upper << ": " << outOfBounds << endl;
    
    // Determine if an entered integer is exactly on the boundary:
    // cout << "Enter an integer between: " << lower << " and " << upper << ": ";
    // cin >> num;
    //
    // bool checkOnBoundary {false};
    // checkOnBoundary = (num == lower || num == upper);
    // cout << "Is " << num << " on one of the boundary integers " << lower << " and " << upper << ": " << checkOnBoundary << endl;

    // Determine if you need to wear a coat based on tempreature and windspeed
    bool wearCoat{false};
    double currentTemp {};
    int windSpeed {};

    const int windSpeedThres {25};          // Wind speed over this threshold would require a jacket/coat
    const double tempThres{45};             // Temperature bewlo this threshold would require a jacket/coat

    cout << "Please enter the current temperature in (F): ";
    cin >> currentTemp;
    cout << "Enter windspeed in (mph): ";
    cin >> windSpeed;   

    // Require a coat if either wind is too high OR temp is too low.
    wearCoat = (currentTemp < tempThres || windSpeed > windSpeedThres); //If one of these conditons is true, then the whole statement is true
    cout << "Do you need to wear a coat using OR: " << wearCoat << endl; 

    cout << endl;

    // Require a coat of wind is too high AND temp is too low. 
    wearCoat = (currentTemp < tempThres && windSpeed > windSpeedThres); //If both of these conditions are true, the the whole statement is true.
    cout << "Do you need to wear a coat using AND: " << wearCoat << endl; 

    return 0;
}
