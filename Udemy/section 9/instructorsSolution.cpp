// Section 9 - Instructer's solution

#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers {};
    char selection {};

    do {
        // Display menu
        std::cout << "\nP - Print numbers" << std::endl;
        std::cout << "A - Add a number " << std::endl;
        std::cout << "M - Display mean of numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << "\nEnter you choice: ";
        std::cin >> selection;

        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                std::cout << "[] - The list is empty" << std::endl;
            else {
                std::cout << "[ ";
                for (auto num : numbers)
                    std::cout << num << " ";
                std::cout << "]" << std::endl;  
            }
        } else if (selection == 'A' || selection == 'a') {
            int numToAdd {};
            std::cout << "Enter an integer to add to the list: ";
            std::cin >> numToAdd;
            numbers.push_back(numToAdd);
            std::cout << numToAdd << " added to list" << std::endl;
        } else if (selection == 'M' || selection == 'm'){
            if (numbers.size() == 0)
                std::cout << "Unable to calculate mean - no data avaliable" << std::endl;
            else {
                int total {};
                 for (auto num : numbers)
                    total += num;
                std::cout << "The mean is: " << total/numbers.size() << std::endl; 
            }
        } else if (selection == 'S' || selection == 's'){
            if (numbers.size() == 0)
                std::cout << "Unable to determine the smallest value - list is empty" << std::endl;
            else {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;
                std::cout << "The smallest number is: " << smallest << std::endl;
            }
        } else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0)
                std::cout << "Unable to determine the largest value - list is empty" << std::endl;
            else {
                int largest = numbers.at(0);
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                std::cout << "The largest number is: " << largest << std::endl;
            }
        } else if (selection == 'Q' || selection == 'q'){
            std::cout << "Goodbye" << std::endl;
        } else {
            std::cout << "Unknown selection, please try again" << std::endl;
        }
    } while (selection != 'q' && selection != 'Q');
    return 0;
}
