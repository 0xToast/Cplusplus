// Section 9 - if else Statments 

#include <iostream>

int main() {

    int num{};
    const int target{10};

    std::cout << "Enter a number and I'll compare it to " << target << ": ";
    std::cin >> num;

    if (num >= target){
        std::cout << "\n============" << std::endl;
        std::cout << num << " is greater than or equal to " << target << std::endl;

        int diff {num - target};
        std::cout << num << " is " << diff << " greater than " << target << std::endl;
    } else {
        std::cout << "\n============" << std::endl;
        std::cout << num << " is less than " << target << std::endl;

        int diff {target - num};
        std::cout << num << " is " << diff << " less than " << target << std::endl;
    }   

    std::cout << std::endl;
    return 0; 
}
