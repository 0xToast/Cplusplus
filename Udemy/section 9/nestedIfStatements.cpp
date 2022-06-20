// Section 9 - Nested if statements 

#include <iostream>

int main() {

    int score{};
    std::cout << "Please enter your exam score: ";
    std::cin >> score;

    char letterGrade {};

    if (score >= 0 && score <= 100) {
        if (score >= 90)
            letterGrade = 'A';
        else if (score >= 80)
            letterGrade = 'B';
        else if (score >= 70)
            letterGrade = 'C';
        else if (score >= 60)
            letterGrade = 'D';
        else 
            letterGrade = 'F';

        std::cout << "\nYour exam grade is: " << letterGrade << std::endl;

        if (letterGrade == 'F')
            std::cout << "\nSorry you must must repeat this class." << std::endl;
        else 
            std::cout << "\nCongratulations, you have passed!";
    } else {
        std::cout << "\n[!] Error " << score << " is not in range!" << std::endl;
    }

    std::cout << std::endl;
    return 0; 
}
