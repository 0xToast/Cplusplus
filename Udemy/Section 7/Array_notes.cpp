//This section goes over arrays in C++

#include <iostream>
using namespace std;

int main() {

    int testScores [5] {12,75,65,81,72};
    
    cout << endl;
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 9: " << testScores[3] << endl;
    cout << "Fifth score at index 9: " << testScores[4] << endl;
    cout << endl; 
    
    cout << "please add a new value for Second score: ";
    cin >> testScores[2];
    cout << "\nSecond score changed to: " << testScores[2] << endl;

    return 0; 
}   