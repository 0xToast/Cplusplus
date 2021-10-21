// Invoice Calculator Exercise
// Section 50 Declaring and Using Contstants

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

    cout << "Please enter the amount of rooms to be cleaned: ";

    int numberOfRooms {0};
    cin >> numberOfRooms; 

    const double pricePerRoom {30}; //const locks pricePerRoom variable to 30
    const double vat {0.14}; //const locks pricePerRoom variable to 30
    const int estimateExpiry {30}; // Days

    cout << endl;
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "=====================================" << endl;
    cout << "Price per room: R" << pricePerRoom << endl;
    cout << "VAT Rate: " << vat << "%" << endl;
    cout << endl;
    cout << "Number of Rooms: " << numberOfRooms <<endl;
    cout << "Service Cost: R" << pricePerRoom * numberOfRooms << endl;
    cout << "VAT: R" << pricePerRoom * numberOfRooms * vat << endl;
    cout << "=====================================" << endl;
    cout << "Total Estimate: R" << (pricePerRoom * numberOfRooms) + (pricePerRoom * numberOfRooms * vat) << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days only." << endl;

    cout << endl;
    return 0;
}
