// Section 9 - Switch statement

#include <iostream>

int main() {

    char letterGrade {};

    std::cout << "\nEnter the letter grade you expect on the exam: ";
    std::cin >> letterGrade;

    switch (letterGrade) {
        case 'a':
        case 'A':
            std::cout << "\nYou need to achieve 90 or above, study hard!" << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "\nYou need to achieve 80 - 89, go study!" << std::endl;
            break;
        case 'c':
        case 'C':
            std::cout << "\nYou need to achieve 70-79 for an average grade" << std::endl;
            break;
        case 'd':
        case 'D':
            std::cout << "\nTry to strive for a better grade. You need to achieve 60-69" << std::endl;
            break;
        case 'f':
        case 'F':
        {
            char confrimSelection {};
            std::cout << "\nAre you sure (Y/N)? ";
            std::cin >> confrimSelection;

            if (confrimSelection == 'y' || confrimSelection == 'Y')
                std::cout << "\nYou didn't study... did you?" << std::endl;
            else if (confrimSelection == 'n' || confrimSelection == 'N')
                std::cout << "\nGood, now go study!";
            else
                std::cout << "\n[!] Invalid input... program terminated.";
            break;
        }
            
        default: 
            std::cout << "\n[!] Invalid grade selected, please try again." << std::endl;
    }

    std::cout << std::endl;
    return 0; 
}
