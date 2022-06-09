//Section 7 Declaring andInitialising Vectors

#include <iostream>
#include <vector> //Must include the library to use vectors 

using namespace std;

int main() {

    // Initialising vectors
    vector <char> vowels {'a','e','i','o','u'}; //Self explanitory
    vector <int> testScores{100, 98, 89, 85, 93}; //Self explanitory
    vector <double> hiTemps (365, 80.0); // Initialises 365 doubles at the value of 80.00
    return 0;
}
