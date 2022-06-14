//Section 8 - Compound Assigment Operators

/*
NOTE: Protip always think as the rhs as being inside parenthesis and you always have it right 
*/

#include <iostream>

int main() {

    int x {10};
    int y {10};
    int z {2};

    x += 1; // x = x + 1;
    y /= 5; // y = y / 5;
    z *= x + y; // z = z * (x + y);

    std::cout << x << std::endl; // 11
    std::cout << std::endl;
    std::cout << y << std::endl; // 2
    std::cout << std::endl;
    std::cout << z << std::endl; // 26
    
    return 0;
}
