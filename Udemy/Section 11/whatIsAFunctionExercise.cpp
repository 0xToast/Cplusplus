// Section 11 - What is a function? Exercise

#include <iostream>
#include <cmath>

int main() {

    double billTotal {102.78};
    int numberOfGuests {5};

    double individualBill {billTotal / numberOfGuests};
    double individualBill1 {floor(individualBill)};
    double individualBill2 {round(individualBill)};
    double individualBill3 {ceil(individualBill * 100)/100};

    std::cout 
        << "The individual bill at location 1 will be $" << individualBill1 << "\n" 
        << "The individual bill at location 2 will be $" << individualBill2 << "\n" 
        << "The individual bill at location 3 will be $" << individualBill3;

    std::cout
        << "\n";

        return 0;
}
