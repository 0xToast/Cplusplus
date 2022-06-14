//Section 6 Integer Types

#include <iostream>
using namespace std;

int main () { 
    
    unsigned short int examScore {55}; // Same as unsigned short examScore{55};
    cout << "My exam score was " << examScore << endl;
    
    int amountOfCars{65};
    cout << "There are " << amountOfCars  << " stored in this lot."<< endl;
    
    long peopleInUtah{20610000};
    cout << "There are " << peopleInUtah << " that reside in the state of Utah."<< endl; 
    
    long long peopleOnEarth{7'600'000'000}; // The c++ 14 standard allows us to use ' to breakup large numbers.
    cout << "There are approximately " << peopleOnEarth << " people on Earth." << endl;
    
    long long distanceToAlphaCentauri {9'461'000'000'000'000};
    cout << "The distance to Alpha Centauri is " << distanceToAlphaCentauri << " kilometers." << endl;
    
    //long distanceToAlphaCentauri {9'461'000'000'000'000}; // -- This will cause a compilation error as the value is too large to fit into a long
    //cout << "The distance to Alpha Centauri is " << distanceToAlphaCentauri << " kilometers." << endl;

    return 0;   
}
