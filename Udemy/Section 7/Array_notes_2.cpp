//This section goes over arrays in C++

#include <iostream>
using namespace std;

int main() {

    //First Example:
    //char vowels[] {'a','e','i','o','u'};
    //cout << "\nThe first vowel is: " << vowels[0] << endl;
    //cout << "The last vowel is: " << vowels[4] << endl;

    //Second Example
    //double hiTemps [] {90.1,89.8,77.5,81.6};
    //cout << "\nThe first value in hiTemp variable is: " << hiTemps[0] << endl;
    
    //hiTemps[0] = 99.9;
    //cout << "The first value was changed using a variable, it is now: " << hiTemps[0] << endl;
    //cout << endl;

    //Third Example:
    int testVar [5] {}; // Curlies with no values, initiialises all values to 0

    cout << "\nThe first value is: " << testVar[0] << endl;
    cout << "\nThe first value is: " << testVar[1] << endl;
    
    cout << "\nThe value of the testVar itself is: " << testVar << endl; //ouput the memory address of testVar (Example: 0x6ffe00).

    return 0; 
}   
