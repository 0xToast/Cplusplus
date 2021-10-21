// 51. Section Challange
// First Attempt

#include <iostream>
using namespace std;

int main() {

    cout << endl;
    cout << "      *********************************************" << endl;
    cout << "      *                                           *" << endl;
    cout << "      *             Blah Cleaning Services        *" << endl;
    cout << "      *                                           *" << endl;
    cout << "      *********************************************" << endl;
    cout << endl;

    cout << "Please enter the amount of small rooms to be cleaned: ";
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms; 

    cout << "Please enter the amount of Large rooms to be cleaned: ";
    int numberOfLargeRooms {0};
    cin >> numberOfLargeRooms; 

    const double pricePerSmallRoom {25}; 
    const double pricePerLargeRoom {35}; 
    const double salesTax {0.06}; 
    const int estimateExpiry {30}; // Days

    cout << endl;
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "=====================================" << endl;
    cout << "Price Per Small Room: $" << pricePerSmallRoom << endl;
    cout << "Price Per Large Room: $" << pricePerLargeRoom << endl;
    cout << "Sales Tax:" << salesTax << "%" << endl;
    cout << endl;
    cout << "Number of Small Rooms: " << numberOfSmallRooms <<endl;
    cout << "Number of Large Rooms: " << numberOfLargeRooms <<endl;
    
    double serviceCost = (numberOfSmallRooms * pricePerSmallRoom) + (numberOfLargeRooms * pricePerLargeRoom); // Add this variable to remove repeated calculations
    
    cout << "Service Cost: $" << serviceCost << endl;
    cout << "Tax: $" << serviceCost * salesTax << endl;
    cout << "=====================================" << endl;
    
    double totalEstimate = (serviceCost + (serviceCost * salesTax)); // Add this variable to remove repeated calculations
    cout << "Total Estimate: $" << totalEstimate << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days only." << endl;

    cout << endl;
    return 0;
}
