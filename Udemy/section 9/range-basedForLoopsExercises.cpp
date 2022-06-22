// Section 9 - Range-based Loops Exercises

#include <iostream>
#include <vector>
#include <iomanip>

int main() {

    int  scores[] {10, 20, 30};

    for (int score : scores) // Explicitly stating the variable type of integer
        std::cout << score << std::endl; //10 20 30

    for (auto score : scores) // using the auto keyword, compiler will deduce what this type should be base on the declarations. In this case it will be int as scores is of integer type
        std::cout << score << std::endl; //10 20 30

    std::cout << std::endl;

    //

    std::vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double averageTemp {0};
    double totalTemps {0};

    for (auto temp : temperatures)
        totalTemps += temp;
        
    if (temperatures.size() != 0)
        averageTemp = totalTemps / temperatures.size(); // temperatures.size() will be of unsigned int 
                                                        // We don't need to do casting here, total has been defined as a double so it will do double division
                                                        
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average temprature temp is: " << averageTemp << std::endl; // Average temprature temp is: 79.6
 
    std::cout << std::endl;

    //

    for (auto val : {1, 2, 3, 4, 5}) // you can put an initialiser list inside of the loop
        std::cout << val << std::endl; // 1 2 3 4 5 

    std::cout << std::endl;

    //

    for (auto character : "This is a test.")
        if (character == ' ')
            std::cout << "\t";
        else
            std::cout << character; // This    is      a       test.

    std::cout << std::endl;
    //

    std::cout << std::endl;

    // Exercise:
    // Use a range-based for loop to loop through a given vector of intergers and determine how many elements in the vector are divisible by 3 or 5.

    std::vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    
    int count{0};
    
    for (auto i: vec) {
        if (i % 3 == 0 || i % 5 == 0) {
            ++count;
        }
    }
    std::cout << count << " integers are divisible by 3 or 5."<< std::endl; // 18 

    std::cout << std::endl;

    return 0;
}
