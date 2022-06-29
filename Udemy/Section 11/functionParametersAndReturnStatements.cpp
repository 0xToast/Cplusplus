// Section 11 - Function Parameters and Return Statement

#include <iostream>
#include <string>
#include <vector>

// Function Prototypes
void passByValue1 (int num);
void passByValue2 (std::string s);
void passByValue3 (std::vector<std::string> v);
void printVector(std::vector<std::string> v);

void passByValue1 (int num){
    num = 1000;
}

void passByValue2 (std::string s){
    s = "Changed";
}

void passByValue3 (std::vector<std::string> v){
    v.clear(); // Delete all vector elements
}

void printVector(std::vector<std::string> v){
    for (auto s : v)
        std::cout
            << s << " ";
    std::cout
        << "\n";
}

int main (){

    int num {10};
    int anotherNum{20};
    std::string name {"Toast"};
    std::vector<std::string> items {"Plate", "Fork", "Table"};

    std::cout 
        << "num variable before calling passByValue1: " << num << "\n";
    passByValue1(num);
    std::cout 
        << "num variable after calling passByValue1: " << num << "\n";

    std::cout 
        << "\n";

    std::cout 
    << "anotherNum variable before calling passByValue1: " << anotherNum << "\n";
    passByValue1(anotherNum);
    std::cout 
        << "anotherNum variable after calling passByValue1: " << anotherNum << "\n";

    std::cout 
        << "\n";

    std::cout 
    << "name variable before calling passByValue2: " << name << "\n";
    passByValue2(name);
    std::cout 
        << "name variable after calling passByValue2: " << name << "\n";

    std::cout 
        << "\n";

    std::cout 
        << "Elements within items vector before calling passByValue3: " << "\n";
    printVector(items);

    passByValue3(items);

    std::cout 
        << "Elements within items vector after calling passByValue3: " << "\n";
    printVector(items);

    std::cout 
        << "\n";

    return 0;
}
