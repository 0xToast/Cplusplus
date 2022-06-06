//Section 6 Floating Point Types

#include <iostream>
using namespace std;

int main () { 
    
    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;

    double valudOfPi {3.14159};
    cout << "PI is " << valudOfPi << endl;

    long double largeAmount {2.7e120};
    cout << largeAmount << " is a very big number" << endl;

    //float test {1.23456789};
    //cout << "This won't print out the entire number " << test << endl; // 1.23457

    return 0;   
}
