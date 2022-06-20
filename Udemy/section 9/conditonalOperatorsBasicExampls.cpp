// Section 9 - Conditonal Operator

/*

Synopsis: 
(cond_expr) ? expr1 : expr2
    - if cond_expr is true then the value of expr1 is returned
    - if cond_expr is false then the value of expr2 is returned
*/

#include <iostream>

int main() {

    // Examples

    int a{10}, b{20};
    int score{97};
    int result{};

    std::cout << ((score > 90) ? "Excellent" : "Good") << std::endl; // Excellent

    result = (a > b) ? a : b;
    std::cout << result << std::endl; // 20

    int result2{};

    result2 = (a < b ) ? (b-a) : (a-b);
    std::cout << result2 << std::endl; // 10

    int result3{};

    result3 = (b != 0) ? (b/a) : 0;
    std::cout << result3 << std::endl; // 2

    return 0;
}
