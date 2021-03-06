// Section 9 - Do While Loop Menu

#include <iostream>

int main() {

    char selection{};

    do {
        std::cout << "\n+----------------------+" << std::endl;
        std::cout << "|      DO WHILE Menu   |" << std::endl;
        std::cout << "+----------------------+" << std::endl;
        std::cout << "1. Do this" << std::endl;
        std::cout << "2. Do that" << std::endl;
        std::cout << "3. Do something else" << std::endl;
        std::cout << "Q. Terminate Program" << std::endl;
        std::cout << std::endl;
        
        std::cout << "> "; 
        std::cin >> selection;

        // Example 1 - IF ELSE Ladder -- Comment out one before compiling

        if (selection == '1')
            std::cout << "\nOption 1 selected - Doing this..." << std::endl;
        else if (selection == '2')
            std::cout << "\nOption 2 selected - Doing that..." << std::endl;
        else if (selection == '3')
            std::cout << "\nOption 3 selected - Doing something else..." << std::endl;
        else if (selection == 'q' || selection == 'Q')
            continue;
        else 
            std::cout << "\n[!] Invalid selection - please try again!" << std::endl;
        
        //Example 2 - Switch Example -- Comment out one before compiling
                switch (selection) {
            case '1':
                std::cout << "\nOption 1 selected - Doing this..." << std::endl;
                break;
            case '2':
                std::cout << "\nOption 2 selected - Doing that..." << std::endl;
                break;
            case '3':
                std::cout << "\nOption 3 selected - Doing something else..." << std::endl;
                break;
            case 'q':
            case 'Q':
                break;
            default:
                std::cout << "\n[!] Invalid selection - please try again." << std::endl;
        }

    } while (selection != 'q' && selection != 'Q'); // Look this up some more (short-curcuit), this is really hurting my brain.
                                                    // Another way to do it is like this:
                                                    // while !(selection == 'q' || selection == 'Q');
    std::cout << "\n[!] Program terminated..." << std::endl;
    std::cout << std::endl;
    return 0;
}
