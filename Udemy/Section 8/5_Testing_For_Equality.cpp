//Testing for Equality - Boolean Examples

#include <iostream>

using namespace std;

int main() {

    bool equal_result {false};
    bool not_equal_result{false};

    cout << boolalpha; // will display true/false instead of 1 or 0 for boolean results.

    //int num1{},num2{};
    // cout << "Enter two integer separated by a space: ";
    // cin >> num1 >> num2;
    // equal_result = (num1 == num2);
    // not_equal_result = (num1 != num2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl;
    // cout << endl;

    // double double1{}, double2{};
    // cout << "Enter 2 doubles entered by a space: ";
    // cin >> double1 >> double2;
    // equal_result = (double1 == double2);
    // not_equal_result = (double1 != double2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl;

    // It be used with char values as well
    
    // char char1{}, char2{};
    // cout << "Enter 2 characters entered by a space: ";
    // cin >> char1 >> char2;
    // equal_result = (char1 == char2);
    // not_equal_result = (char1 != char2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl;

    // it can also be done with mixed var types
    // num1 will be promoted to a double then the comparison happens.

    int num1{};
    double double1{};
    cout << "Enter an integer and a double seperated by space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;

    cout << endl;

    return 0;
}
