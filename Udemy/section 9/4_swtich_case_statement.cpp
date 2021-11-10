#include <iostream>

using namespace std;

int main () {

    char letter_grade{};

    cout << "\nEnter the letter grade you expect on the exam: ";
    cin >> letter_grade; 

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "\nYou need a 90 or above for an A grade , study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "\nYou need 80-89 for a B grade." << endl;
            break;
        case 'c':
        case 'C':
            cout << "\nYou need 70-79 for a C grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "\nYou need 60-69 for a D grade." << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure (Y/N)?" << endl;
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you didn't study." << endl;
            else if (confirm == 'n' || confirm == 'N') 
                cout << "Good go study";
            else 
                cout << "Invalid input data... program terminated." << endl;
            
            break;
        }
        default:
            cout << "\nInvalid grade symbol entered, please try again." << endl;   
    }

    cout << endl;
    return 0;
}
