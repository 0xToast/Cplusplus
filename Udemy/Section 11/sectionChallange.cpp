// Section 11 - Challange

/* 
In this challange, I needed to take my challange solution from section 9 and rewrite it using functions.

I had to keep the vector declaration within main, to get used to passing by reference.

New features:

1) Sanitised user input, to remove the need to inlcude lowercase char variants as well.
2) Added in the ability for users to clear the list of numbers.
*/

#include <iostream>
#include <vector>
#include <cctype> // Used this for toupper() function to add input sanitisation.

void printMenu();
void displayList(const std::vector<int> &list);         // I used passed by reference for all of these to save on space.
void addNumber(std::vector<int> &list);                 // I also made the vector a const within most of the funcs to safeguard against accidental changes within func that print only.
void calcMean(const std::vector<int> &list);
void calcSmallestNum(const std::vector<int>& list);
void calcLargestNum(const std::vector<int>& list);
void clearList(std::vector<int>& list);                 // Just added this as a function, to get used to the concept of passing by reference.

int main() {

    char selection{};
    std::vector<int> list{};

    do {
        printMenu();
        std::cin 
            >> selection;

        // Sanitised user input, to remove the need to inlcude lowercase char variants as well.
        selection = toupper(selection);

        switch (selection) {
            case 'A': 
            {
                addNumber(list);
                break;
            }
            case 'P':
            {
                displayList(list);
                break;
            }
            case 'M':
            {
                calcMean(list);
                break;
            }
            case 'S':
            {
                calcSmallestNum(list);
                break;
            }
            case 'L':
            {
                calcLargestNum(list);
                break;
            }
            case 'H': // I added this for funsies again.
            {
                std::cout
                    << "\n" << "The memory address of the list is: " << &list
                    << "\n";
                break;
            }
            case 'C':
            {
                clearList(list);
                break;
            }
            case 'Q':
            {
                std::cout
                    << "\n" << "[!] Exiting..." 
                    << "\n";
                break;
            }
            default:
            {
                std::cout
                    << "\n[!] - Invlaid input, please try again." 
                    << "\n";
            }
        }
    } while (selection != 'Q');

    return 0; 
}

void printMenu() {
    std::cout
        << "\n+--------------------------------+" << "\n"
        << "|       Section 11 Challange     |" << "\n"
        << "+--------------------------------+" << "\n"
        << "A. Add a number to the list" << "\n"
        << "P. Print list of numbers" << "\n"
        << "M. Display mean of numbers" << "\n"
        << "S. Display the smallest number" << "\n"
        << "L. Display the largest number" << "\n"
        << "H. Print Memory Address of list" << "\n"
        << "C. Clear list" << "\n"
        << "Q. Quit" << "\n"
        << "+---------------------------------+" << "\n"
        << "Enter selection: ";
}

void displayList(const std::vector<int> &list) {
    if (list.size() == 0) {
        std::cout
            << "\n[ ] - The list has no values." 
            << "\n";
    }
    else {
        std::cout
            << "\n[ ";
        
        for (auto i : list)
            std::cout
            << i << " ";
        
        std::cout
            << "]";
    }
}

void addNumber(std::vector<int> &list) {
    int number{};
    std::cout
        << "\nEnter a number to add to the list: ";
    std::cin
        >> number;

    list.push_back(number);

    std::cout
        <<"\n" << number << " added to list." 
        << "\n";
}

void calcMean(const std::vector<int>& list) {
    if (list.size() == 0) {
        std::cout
            << "\nUnable to calculate mean - no data avaliable." 
            << "\n";
    }
    else {
        int total{};

        for (auto num : list)
            total += num;
        std::cout
            << "\nThe mean is: " << total / list.size() 
            << "\n";
    }
}

void calcSmallestNum(const std::vector<int>& list) {
    if (list.size() == 0) {
        std::cout
            << "\nUnable to calculate samllest number - no data avaliable." 
            << "\n";
    }
    else {
        int smallest = list.at(0);
        
        for (auto num : list)
            if (num < smallest)
                smallest = num;
        
        std::cout 
            << "\nThe smallest number is: " << smallest 
            << "\n";
    }
}

void calcLargestNum(const std::vector<int>& list) {
    if (list.size() == 0) {
        std::cout
            << "\nUnable to calculate largest number - no data avaliable." 
            << "\n";
    }
    else {
        int largest= list.at(0);
        
        for (auto num : list)
            if (num > largest)
                largest = num;
        
        std::cout
            << "The largest number is: " << largest 
            << "\n";
    }
}

void clearList(std::vector<int>& list) {
    if (list.size() == 0) {
        std::cout
            << "\n[ ] - List is already empty." 
            << "\n";
    }
    else {
        list.clear();
        std::cout
            << "\n" << "All values have been cleared from the list."
            << "\n";
    }
}
