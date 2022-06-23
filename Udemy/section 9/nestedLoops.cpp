// Section 9 - Nested Loops

#include <iostream>
#include <vector>

int main() {

    // Basic  Example
    for (int num1 {1}; num1 <= 10; ++num1){
        for (int num2 {1}; num2 <= 10; ++num2){
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        }
    std::cout << "-------------" << std::endl;
    }

    // Histogram - Takes in user input a builds a histogram according to the users input.
    int numItems{};

    std::cout << "\nHow many data items do you have? ";
    std::cin >> numItems;

    std::vector<int> data{};

    for (int i{1}; i <= numItems; ++i){
        int  dataItem{};
        std::cout << "Enter data item " << i << ": ";
        std::cin >> dataItem;
        data.push_back(dataItem);
    }

    std::cout << "\nGenerating Histogram:" << std::endl;
    std::cout << "=====================\n"<< std::endl;
    
    for (auto val : data) {
        for (int i {1}; i <= val; ++i){
            if (i % 5 == 0) // Every 5th item displays a star. (Makes histogram easier to read.)
                std::cout << "*";
            else
                std::cout << "-";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
