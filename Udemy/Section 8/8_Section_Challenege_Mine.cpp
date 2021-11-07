// Challenge - Section 74 - My Attempt - PASSED

#include <iostream>

using namespace std;

int main() {

    int amountOfCents {}, dollars{100}, quaters{25}, dimes{10}, nickles {5},pennies {1};

    cout << "Please enter the amount of cents: ";
    cin >> amountOfCents;

    int amountInDollars{}, remainingCents{};

    amountInDollars = amountOfCents / dollars;
    remainingCents = amountOfCents % dollars; 

    int amountInQuaters {};

    amountInQuaters = remainingCents / quaters;
    remainingCents = remainingCents % quaters; 

    int amountInDimes {};

    amountInDimes = remainingCents / dimes;
    remainingCents = remainingCents % dimes;
    
    int amountInNickles {};

    amountInNickles = remainingCents / nickles;
    remainingCents = remainingCents % nickles;

    int amountInPennys {};

    amountInPennys = remainingCents / pennies;

    cout << "\nChange can be provided as follows: " << endl;
    cout << "Dollars: " << amountInDollars << endl;
    cout << "Quaters: " << amountInQuaters << endl; 
    cout << "Dimes: " << amountInDimes << endl; 
    cout << "Nickles: " << amountInNickles << endl;
    cout << "Pennies: " << amountInPennys << endl;

    return 0;
}
