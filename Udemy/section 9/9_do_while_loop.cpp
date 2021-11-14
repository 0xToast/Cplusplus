// Section 9
// Do While Loop

#include <iostream>

using namespace std;

int main () {

    char selection {};

    do {
        cout << "\n+----------------------+" << endl;
        cout << "|      DO WHILE Menu   |" << endl;
        cout << "+----------------------+" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "+----------------------+" << endl;
        cout << "\nEnter a selection: ";
        cin >> selection;

        // Example 1 - Switch example
        switch (selection) {
            case '1':
                cout << "\nOption 1 selected - Doing this..." << endl;
                break;
            case '2':
                cout << "\nOption 2 selected - Doing that..." << endl;
                break;
            case '3':
                cout << "\nOption 3 selected - Doing something else..." << endl;
                break;
            case 'q':
            case 'Q':
                break;
            default:
                cout << "\n[!] Invalid selection - please try again." << endl;
        }

        // Example 2 - Using if-else ladder
        // if (selection == '1')
        //     cout << "\nOption 1 selected - Doing this..." << endl;
        // else if (selection == '2')
        //     cout << "\nOption 2 selected - Doing that..." << endl;
        // else if (selection == '3')
        //     cout << "\nOption 3 selected - Doing something else..." << endl;
        // else if (selection == 'Q' || selection == 'q')
        //     continue;
        // else
        //     cout << "\n[!] Invalid selection - please try again. " << endl;

    } while (selection != 'q' && selection != 'Q');

    cout << "\n[!] Program terminated" << endl;
    cout << endl;
    return 0;
}
