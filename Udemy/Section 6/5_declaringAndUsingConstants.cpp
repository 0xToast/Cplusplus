//Section 6 Declaring and using Constants

#include <iostream>

using namespace std;

int main() {
    cout << "Please enter the amount of rooms to be cleaned: ";

    int numberOfRooms {0};
    cin >> numberOfRooms; 

    const double pricePerRoom {38.50}; //const locks pricePerRoom variable to 30
    const double taxRate {0.06}; //const locks taxes variable to 0.06
    const int estimateExpiry {30}; // const locks days variable to 30

    //Note: If you try to change a constant's value, the compilation will fail.
    //int estimateExpiry {35};

    cout << endl;
    cout << "\nQuotation for carpet cleaning service" << endl;
    cout << "=====================================" << endl;
    cout << "Price per room: $" << pricePerRoom << endl;
    cout << "Tax Rate: " << taxRate << "%" << endl;
    cout << endl;
    cout << "Number of Rooms: " << numberOfRooms <<endl;
    cout << "Service Cost: $" << pricePerRoom * numberOfRooms << endl;
    cout << "VAT: $" << pricePerRoom * numberOfRooms * taxRate << endl;
    cout << "=====================================" << endl;
    cout << "Total Estimate: $" << (pricePerRoom * numberOfRooms) + (pricePerRoom * numberOfRooms * taxRate) << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days only." << endl;

    cout << endl;
    return 0;
}
