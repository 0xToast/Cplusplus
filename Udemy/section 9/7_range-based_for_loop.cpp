
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main () {

    int scores[] {10, 20, 30}; 
    //auto allows compiler to deduce type to use. Since array is int, score var will be of int type.
    for (auto score : scores)
        cout << score << endl; //10 20 30

    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double averageTemp {0};
    double totalTemps {0};

    for (auto temp : temperatures)
        totalTemps += temp;
        
    if (temperatures.size() != 0)
        averageTemp = totalTemps / temperatures.size();

    //Allows for output maniplulation, round of to 1 digit after the comma.
    cout << fixed << setprecision(1);
    cout << "Average temprature temp is: " << averageTemp << endl; // Average temprature temp is: 79.6

    for (auto valueInArray:{1,2,3,4,5})
         cout << valueInArray << endl;

    for (auto character: "This is a test.")
        if (character != ' ')
            cout << character; //Thisisatest.

    cout << endl;
    return 0;
}
