#include <iostream>
using namespace std;

int main() {
    
    cout << "\n  Blah's Carpet Cleaning Service" << endl;
    cout << "===================================" << endl;
    cout << endl;

    int numSmallRooms {0};
    int numLargeRooms{0};

    cout << "How many small rooms would you like cleaned? ";
    cin >> numSmallRooms;

    cout << "Hown many large rooms would you like cleaned? ";
    cin >> numLargeRooms;
    cout << endl; 

    const double smallRoomPrice {25.0}; // dollars
    const double largeRoomPrice {35.0}; // dollars 
    const int estimateExpiry{30}; // days
    const double taxes {0.06}; // Taxes 

    cout << " Quotation for Carpet Cleaning Service" << endl;
    cout << "=======================================" << endl;
    cout << "Rates: " << endl;
    cout << "$" << smallRoomPrice << " per small room" << endl;
    cout << "$" << largeRoomPrice << " per large room" << endl;
    cout << endl;

    double totalCost {(numSmallRooms * smallRoomPrice) + (numLargeRooms * largeRoomPrice)};

    cout << "Number of small rooms: " << numSmallRooms << endl;
    cout << "Number of small rooms: " << numLargeRooms << endl;
    cout << endl;
    cout << "Service Fee: $" << totalCost << endl;
    cout << "Sales Tax: $" << totalCost * taxes << endl;
    
    double totalEstimate {totalCost + (totalCost * taxes)};
    
    cout << "=======================================" << endl;
    cout << "Total Estimate: $" << totalEstimate << endl;
    cout << "This quotation is valid for " << estimateExpiry << " days only." << endl;
    cout << endl;
    
    return 0;
}
