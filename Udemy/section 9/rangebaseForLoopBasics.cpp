// Section 9 - Range-based Loops

// I found the range-base explanation in the course to be lacking. So I did some extra research.
// C++ Programming Tutorial - Range Based For Loop: https://www.youtube.com/watch?v=8qrZYjL2jBg

#include <iostream>
#include <vector>
#include <iomanip> // Used to make values more precise

int main() {

    int scores [] {100, 90, 97};

    for (int score : scores) // Explicitly setting score of integer type
        std::cout << score << std::endl; // 100 90 97

    std::cout << std::endl;

    //

    for (auto score : scores) // auto keyword allows the compiler to determine the most appropriate variable type to used base on the decleration provided.
        std::cout << score << std::endl; // 100 90 97

    std::cout << std::endl;

    //

    // C++ Programming Tutorial - Range Based For Loop: https://www.youtube.com/watch?v=8qrZYjL2jBg
    int data[] {1, 2, 3, 4, 5, 6};

    for (int dataItem : data){
        std::cout << dataItem << "\t"; // 1       2       3       4       5       6
    }

    std::cout << std::endl;
    //

    std::cout << std::endl;

    std::vector<double> temps {87.2, 77.1, 80.0, 72.5};

    double averageTemp {};
    double runningSum;

    for (auto temp : temps) // auto will deduce that temp will be of double type due to the vector temps being of double type.
        runningSum += temp; // runningSum = runningSum + temp

    averageTemp = runningSum / temps.size();

    std::cout << averageTemp << std::endl; // 79.2

    std::cout << std::endl;

    //

    double averageTemp2 {};
    double runningSum2 {};
    int size {0};

    for (auto temp2 : {60.2, 80.1, 90.0, 78.2}) {
        runningSum2 += temp2; // runningSum2 = runningSum2 + temp2
        ++size;
    }

    averageTemp2 = runningSum2 / size;

    std::cout << std::fixed << std::setprecision(2);  // Part of <iomanip> library. Used to set decimal precision
    std::cout << averageTemp2 << std::endl; // 77.12

    std::cout << std::endl;

    //

    for (auto c : "Toasty")
        std::cout << c << std::endl;

    // Output 
    // T
    // o
    // a
    // s
    // t
    // y

    return 0;
}
