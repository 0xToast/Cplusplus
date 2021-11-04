//Section 8
//Convert EUR to USD

#include <iostream>

using namespace std;

int main() {

    const double usdPerEuro {1.19};

    cout << endl;
    cout << "      ***EUR to USD Convertor***" << endl;
    cout << endl;
    cout << "Enter the amout of EUR to be converted to USD: ";

    double eur{0.0};
    double usd{0.0};
    cin >> eur; 

    usd = eur * usdPerEuro;

    cout << eur << " EUR is equivanlent to " << usd << " USD." << endl; 
    cout << endl;

    return 0;
}