// Section 9 - Section Challenge

/* 
This challnage is about using a collection (list) of integers and allowing the user
to select options from a menu to perform operations based on what they selected

The program should do the following:
P - Print numbers within the collection
A - Add a number to the collection
M - Display the mean of the numbers within the list
S - display the smallest number within the collection
L - Display the largest number within the collection
Q - Quit 

Another objective was to implement input validation within the menu screen.

I took this a step further and added input validation into the all of the
operations as well, except for adding a number to the list function. 

I also added a function that prints the memoery address where the vector is
store. I want to use this program later to assess how the values are inputted
in memory. 

TO DO:
======
* I need to add input validation to option A on the first input on line 78 - 
  So far most of my attempts have failed. - I believe it is the way I am 
  checking char value as basic tests show that my algorithmn works 
  
  https://www.codegrepper.com/code-examples/cpp/c%2B%2B+how+to+check+input+is+integer

* Add a function that clears the vector of values.

*/

// Section 9 - Section Challenge

#include <iostream>
#include <vector>

int main() {

    char selection {};
    std::vector<int> dataSet{};

    do {

        std::cout << "\n+-------------------------------+" << std::endl;
        std::cout << "|       Section 9 Challange     |" << std::endl;
        std::cout << "+-------------------------------+" << std::endl;
        std::cout << "A. Add a number to the list" << std::endl; // Added this to the top of the list to make it more intuitive
        std::cout << "P. Print list of numbers" << std::endl;
        std::cout << "M. Display mean of numbers" << std::endl;
        std::cout << "S. Display the smallest number" << std::endl;
        std::cout << "L. Display the largest number" << std::endl;
        std::cout << "H. Print Memory Address of list" << std::endl;  // Added this just for funsies
        std::cout << "Q. Quit" << std::endl;
        std::cout << "+-------------------------------+" << std::endl;
        std::cout << "\nEnter a selection: ";
        std::cin >> selection;
        std::cout << std::endl;

        switch (selection) {
            case 'P':
            case 'p':
            {
                if (dataSet.size() == 0){
                    std::cout << "[ ] - The list is currently empty." << std::endl;
                }
                else{
                    // While trying to compile I got the warning for [-Wsign-compare], so I had to use std::size_t when delcaring i within in the FOR loop
                    // https://stackoverflow.com/questions/7984955/what-is-wrong-with-my-for-loops-i-get-warnings-comparison-between-signed-and-u
                    std::cout << "[ ";
                    
                    // I could have used a range base loop here but wanted to test my knowledge on interation.
                    for (std::size_t i {0}; i < dataSet.size(); ++i)
                    std::cout << dataSet.at(i) << " ";

                    std::cout << "]";
                    std::cout << std::endl;
                }
            }
                break;
            case 'A':
            case 'a':
            {
                // Challange only asked that we add numbers into the vector.
                // However, I added extra functionlity to the user and asked if they would want to add extra numbers
                bool done {false};
                int num {};
                char cont{};
                        
                while (!done) {

                    std::cout << "Please enter a number add to the list: ";
                    std::cin >> num;

                    dataSet.push_back(num);
                    std::cout << "\n" << num << " added to list." << std::endl;
                    
                    std::cout << "\nDo you want to add another number to the list? (Y/N) ";
                    std::cin >> cont;
                    std::cout << std::endl;

                    if (cont == 'y'|| cont == 'Y')
                            continue;
                    else if (cont == 'n'|| cont == 'N')
                            done = true;
                    else {
                        std::cout << "[!] Invalid selection, returning to home screen..." << std::endl;
                        break;
                    }   
                }

            }
                break;
            case 'M':
            case 'm':
            {
                int total{};

                if (dataSet.size() == 0)
                    std::cout << "The list is currently empty, unable to complete calculation!" << std::endl;
                else {
                    for (auto num : dataSet)
                        total += num; // total = total + num - adds all the numbers in the vector together using a range-based for loop.
                    
                    // I used static_cast to change total to a double in order to display decimal points in the final calculation.
                    std::cout << "The average of numbers wihtin the list is: " << static_cast<double>(total)/dataSet.size() << std::endl; 
                }
            }
                break;
            case 'L':
            case 'l':
            {
                if (dataSet.size() == 0)
                    std::cout << "The list is currently empty, there is no numbers to evaluate!" << std::endl;
                else if (dataSet.size() == 1)
                    std::cout << "There is only 1 number wihtin the list. Therefore, " << dataSet.at(0) << " is the highest number." << std::endl;
                else {
                    // https://www.dcode.fr/minimum-list - I used this to figure out the algorithmn
                    int max = dataSet.at(0);
                    
                    for (auto num : dataSet)
                        if (num > max)
                            max = num;
                        else 
                            continue;
                    
                    std::cout << "The highest number in the list is: " << max << std::endl;
                }
            }
            break;  
            case 'S':
            case 's':
            {
                if (dataSet.size() == 0)
                    std::cout << "The list is currently empty, there is no numbers to evaluate!" << std::endl;
                else if (dataSet.size() == 1)
                    std::cout << "There is only 1 number wihtin the list. Therefore, " << dataSet.at(0) << " is the lowest number." << std::endl;
                else {
                    // https://www.dcode.fr/minimum-list - I used this to figure out the algorithmn
                    int min = dataSet.at(0);
                    
                    for (auto num : dataSet)
                        if (num < min)
                            min = num;
                        else 
                            continue;
                    
                    std::cout << "The lowest number in the list is: " << min << std::endl;
                }
            }  
                break;
            case 'H':
            case 'h':
                std::cout << "Memory address of vector is: " << &dataSet << std::endl;
                break;

            case 'q':
            case 'Q':
                std::cout << "Option Q selected..." << std::endl;
                break;

            default:
                std::cout << "Invalid selection - please try again." << std::endl;
        }

    } while (selection != 'q' && selection != 'Q');
    std::cout << "\n[!] Program terminated." << std::endl;

    std::cout << std::endl;
    return 0;
}
