// Section 11 - What is a function? - cstdlib

#include <iostream>
#include <cstdlib> // Required for rand() function
#include <ctime> // required for time() function

int main() {

    int randomNumber {};
    size_t count {10}; // Number of random numbers to generate
    const int min {1}; // lowerbound
    const int max{6}; // upper bound

    std::cout 
        << "RAND_MAX on my system is: " << RAND_MAX << "\n";

    // Seed the random number generator
    // If you dont seed the generator you will get the same sequnce of randoms numbers every run
    srand(time(nullptr));

    for (size_t i {1}; i <= count; ++i) {
        randomNumber = rand() % max + min;
        std::cout
            << randomNumber << "\n";
    }

    std::cout
        << "\n";

        return 0;
}
