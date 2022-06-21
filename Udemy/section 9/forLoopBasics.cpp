// Section 9 - For Loops

#include <iostream>

int main() {

    // Basic Example

    int i {0};

    for (i = 1 ; i <= 5 ; ++i)
        std::cout << i << std::endl; // 1 2 3 4 5
    
    std::cout << std::endl;

    // More examples - Variables can be intialised wihtin the for loop
    
    // Initilisation style 
    for (int j {1} ; j <=5 ; ++j)
        std::cout << j << std::endl; // 1 2 3 4 5
    
    std::cout << std::endl;

    // Assignment style
    for (int j = 1 ; j <=5 ; ++j)
        std::cout << j <<std::endl; // 1 2 3 4 5
    
    std::cout << std::endl;
    // Note: variables j & k are only accessable to the loops above, other blocks of code wiil not be able to access j & k.
   
    // More complex examples

    for (int j {1} ; j <= 10; ++j) {
        if (j % 2 == 0)
            std::cout << j << std::endl; // 2 4 6 8 10
        }
    
    std::cout << std::endl;

    //

    int scoreArray [] {100, 90, 87};
    
    for (int j {0} ; j < 3 ; ++j) {
        std::cout << scoreArray[j] << std::endl; // 100 90 97
    }

    std::cout << std::endl;

    //

    for ( int a {1}, b {5} ; a <= 5 ; ++a, ++b) {
        std::cout << a << " * " << b << " : " << (a * b) << std::endl;
     
     // Output
     // 1 * 5 : 5
     // 2 * 6 : 12
     // 3 * 7 : 21
     // 4 * 8 : 32
     // 5 * 9 : 45
    }

    return 0;
}
