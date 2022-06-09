//Section 7 Examples of Arrays

#include <iostream>
using namespace std;

int main() {
    char vowels[] {'a','e','i','o','u'}; //Compiler automatically determines the amount of elements in [], if no number is specified. In this case it would be 5
    cout << "\nThe first vowel is: " << vowels[0] << endl; //a
    cout << "The last vowel is: " << vowels[4] << endl; //u
    //

    double hiTemps [] {90.1, 89.8, 77.5, 81.6}; //Compiler automatically determines the amount of elements in [], if no number is specified. In this case it would be 4
    cout << "\nThe first high temp is:" << hiTemps[0] << endl;

    hiTemps[0] = 100.7; //Overwrites the first element in hiTemps to 100.7 
    cout << "The first high temp is now: " << hiTemps[0] << endl; //100.7
    //

    int testScores [5]; //We have specified array of 5 integers but didn't initialise a value for them

    cout << "\nTest score at index 0 is: " << testScores[0] << endl; //Random data
    cout << "Test score at index 1 is: " << testScores[1] << endl; //Random data
    cout << "Test score at index 2 is: " << testScores[2] << endl; //Random data
    cout << "Test score at index 3 is: " << testScores[3] << endl; //Random data
    cout << "Test score at index 4 is: " << testScores[4] << endl; //Random data

    cout << "\nPlease enter 5 test scores: " << endl;
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];

    cout << "\nTest score at index 0 is: " << testScores[0] << endl; //Displays array element entered at index 0
    cout << "Test score at index 1 is: " << testScores[1] << endl; //Displays array element entered at index 1
    cout << "Test score at index 2 is: " << testScores[2] << endl; //Displays array element entered at index 2
    cout << "Test score at index 3 is: " << testScores[3] << endl; //Displays array element entered at index 3
    cout << "Test score at index 4 is: " << testScores[4] << endl; //Displays array element entered at index 4
    
    cout << "\nNotice what the value of the arrary name is: " << testScores << endl; //Example: 0x6ffdd0. 
    cout<< endl;                                                                     //This is the memory address of where the array is stored in memory.                                                                       
    return 0;
}
