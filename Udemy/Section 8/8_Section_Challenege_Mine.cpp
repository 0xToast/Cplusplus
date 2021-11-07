// Challenge - Section 74 - My Attempt - PASSED

/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
*/

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
