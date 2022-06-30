// Section 11 - Default Argument Values 

#include <iostream>
#include <iomanip>
#include <string>

// Function Prototypes

// It is best practice to specify defaults within the function prototype but it is not mandatory. 
// REMEMBER, default values need to start on the tail end otherwise it will cause a compilation error.
double calcCost (double baseCost, double taxRate = 0.06, double shipping = 3.50);
double calcCost2 (double baseCost = 100.00, double taxRate = 0.06, double shipping = 3.50); // all arguments have a defaultvalue .
void greeting (std::string name, std::string prefix = "Mr.", std::string suffix = " ");

// Function Definitions 
double calcCost(double baseCost, double taxRate, double shipping) {
    return baseCost += (baseCost * taxRate) + shipping;
}

double calcCost2(double baseCost, double taxRate, double shipping) {
    return baseCost += (baseCost * taxRate) + shipping;
}

void greeting (std::string name, std::string prefix, std::string suffix){
    std::cout 
        << "Hello " << prefix + " " + name + " " + suffix << "\n";
}


int main (){
    double cost {0};
    
    cost = calcCost (100.00, 0.08, 4.25); // Will use no defaults specified within the function prototype for calcCost().
    std::cout
        << std::fixed << std::setprecision(2)
        << "Cost is: " << cost << "\n"; // 112.25

    cost = calcCost(100.00, 0.08); // Will use default shipping specified within the function prototype for calcCost().
    std::cout
        << "Cost is: " << cost << "\n"; // 111.50

    cost = calcCost(200.00); // Will use default tax and shipping specified within the function prototype for calcCost().
    std::cout
        << "Cost is: " << cost << "\n"; // 215.50
  
    cost = calcCost2(); // Will use all defaults tax specified within the function prototype for calcCost2().
    std::cout
        << "Cost is: " << cost << "\n" // 109.50
        << "\n";

    greeting("Glenn Jones", "Dr.", "M.D.");     // Will use no defaults
                                                // Hello Dr. Glenn Jones M.D.

    greeting("John Andrews", "Prof.", "Ph.D");  // Will use no defaults
                                                // Hello Prof. John Andrews Ph.D

    greeting("James Miller", "Prof.");          // Will use suffix default
                                                // Hello Prof. James Miller

    greeting("Toasty McToast");                 // Will use prefix and suffix default
                                                // Hello Mr. Toasty McToast
                                            
    greeting("Mary Howard", "Mrs.", "Ph.D");    // Will use no defaults
                                                // Hello Mrs. Mary Howard Ph.D

    return 0;
}
