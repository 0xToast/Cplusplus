// Section 9 - Continue and Break Statements

#include <iostream>
#include <vector>

int main() {

    std::vector<int> values {1,2,-1,3,-1,4,28,47,-1,-1,5,12,-1,-99,14,78,34};

    for (auto val : values) {
        if (val == -99) {
            std::cout << "DEBUG >>> break statement executed" << std::endl;
            break; // No further statements are executed, loop immediately terminates
        }
        else if (val == -1) {
            std::cout << "DEBUG >>> continue statement executed"<< std::endl;
            continue; // No further statements are executed, control goes back to the beginning of the loop
        }
        else
            std::cout << val << std::endl;
    }

    return 0;
}
