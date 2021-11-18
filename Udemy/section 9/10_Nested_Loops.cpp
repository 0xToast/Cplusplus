// Section 9
// Nested Loops 

#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    // Prints multiplication tables.
    // Tip: The inner loop ticks faster than the outer loop. 
    
    for (int num1 {1}; num1 <=10; ++num1) {
        for (int num2 {1}; num2 <=10; ++ num2) {
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        }
        cout << "----------" << endl; 
    }

    // Collect items from user to display histogram. 
    int dataItems {};

    cout << "How many data items do you have? ";
    cin >> dataItems;

    vector<int> data{};

    for (int i{1}; i <= dataItems; ++i) {
        int item{};
        cout << "Enter data item " << i << ": ";
        cin >> item;
        data.push_back(item);
    }

    cout << "\nPrinting Histogram: \n" << endl;
    // ranged based loop - must go over again.
    for (auto value: data) {
        for (int i{1}; i <= value; ++i) {
            if (i % 5 == 0)
                cout  << "*";
            cout << "-";
        } 
        cout << endl;
    }

    cout << endl;
    return 0;
}
