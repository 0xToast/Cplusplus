//Section 9 more nested if statements

/*
Shipping calculator.

Ask the user for the package dimensions
length, width, height - these should be integers

All dimensions must be 10 inches or less otherwise shippment cannot happen.

Base cost of $2.50

If package volume is greater than 100 cubic inches there is a 10% surcharge
If package volume is greater than 500 cubic inches there is a 25% surcharge

Psudo Code: 
============

GET Package Dimensions (L & H & W) from USER
ENSURE all dimensions are 10 inches or less BREAK if too big
WORKOUT Volume of user package
IF package volume is greater than 100 ADD 10% surcharge (0.10 * 2.50) amount
IF package volume is grater than 500 ADD 25% surcharge (0.25 * 2.50) to final amount 
DISPLAY final amount to user. 
*/

// https://stackoverflow.com/questions/1439907/what-are-the-differences-between-if-else-and-else-if

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	int length{0}, width{0}, height{0};
	const double baseCost {2.50};
	
	const int maxDimensionLength {10};

	const int tier1Threshold {100};
	const int tier2Threshold {500};
	
	const double tier1Surcharge{0.10};
	const double tier2Surcharge{0.25};
	
	cout << "\n==================================";
	cout << "\n|   Company X Package Calulator. |";
	cout << "\n==================================";
	cout << endl;
	cout << "\nPlease enter the package length, width and hieght seperated by spaces: ";
	cin >> length >> width >> height;
	
	if (length > maxDimensionLength || width > maxDimensionLength || height > maxDimensionLength)
	{
		cout << "\nUnfortunately, the package exceeds the size specifications of this service and cannot be shipped." << endl;
	} else {
		// DEBUG STATEMENT
		//cout << "\nDEBUG CHECK >>> PACKAGE ACCEPTED EXCUTING ELSE STATMENT" << endl; 
		
		double packageCost {0};
		int packageVolume{0};
		
		packageVolume = length * width * height;
		packageCost = baseCost;
		
		if (packageVolume > tier2Threshold) {
			packageCost += packageCost * tier2Surcharge;
			//DEBUG STATEMENT 
			//cout << "DEBUG CHECK >>> APPLYING tier2Surcharge" << endl;
		} else if (packageVolume > tier1Threshold) {
			packageCost += packageCost * tier1Surcharge;
			//DEBUG STATEMENT 
			//cout << "DEBUG CHECK >>> APPLYING tier1Surcharge" << endl;
		} 
		
		cout << "\nYour package volume is: " << packageVolume << " cubic inches." << endl;
		cout << fixed << setprecision(2); // prints only 2 decimal places in the dollar amount
		cout << "Total package shippment cost is: $" << packageCost << endl;
		
	}
	
  cout << endl;
	return 0;
}
