// Section 9 - if Statments 

#include <iostream>

//using std::cout; // As an example you can add commonly used items instead of adding the whole std library.
//using std::cin;
//using std::endl;

int main() {

    int num{};
    const int min {10};
    const int max {100};

    std::cout << "\nEnter a number bewtween " << min << " and " << max << ": ";
    std::cin >> num;
    std::cout << std::endl;

    // {} is needed if you want to execute more statements if the condition is met
    if (num >= min){
        std::cout << "====== if statment 1 ======" << std::endl;
        std::cout << num << " is greater than or equal to " << min << std::endl;

        // Worksout how far away the user's input is from the min number
        // This diff variable is only accessible to this block statement 
        int diff {num - min};
        std::cout << num << " is " << diff << " greater than " << min << std::endl;
        std::cout << std::endl;
    }

    if (num <= max){
        std::cout << "====== if statment 2 ======" << std::endl;
        std::cout << num << " is less than or equal to " << max << std::endl;

        // Worksout how far away the user's input is from the max number.
        // This diff variable is only accessible to this block statement 
        int diff {max - num};
        std::cout << num << " is " << diff << " less than " << max << std::endl;
        std::cout << std::endl;
    }

    if (num >= min && num <= max){
        std::cout << "====== if statment 3 ======" << std::endl;
        std::cout << num << " is within range" << std::endl;
        std::cout << "This means statements 1 and 2 must also display!!!" << std::endl;
        std::cout << std::endl;
    }

    if (num == min || num == max){
        std::cout << "====== if statment 4 ======" << std::endl;
        std::cout << num << " is on a boundary number" << std::endl;
        std::cout << "This means all 4 statements display!!!" << std::endl;
        std::cout << std::endl;
    }

    return 0; 

}
