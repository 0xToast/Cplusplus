/*

Increment operator ++
Decrement operator --

Increments or decrement its operand by 1
Can be used with ints, floats and pointers

Prefix ++num (Before item is used)
Postfix num++ (After item is used)

Don't overuse this operator. 
Never use it twice for the same variable in the same statment.

*/

#include <iostream>

using namespace std;

int main() {

    int counter {10};
    int result {0};

    // // Example 1 - simple increment
    // cout << "Counter: " << counter << endl; // 10
    //
    // counter = counter + 1;
    // cout << "Counter: " << counter << endl; // 11
    //
    // counter++;
    // cout << "Counter: " << counter << endl; // 12
    //
    // ++counter; 
    // cout << "Counter: " << counter << endl; // 13


    // Example 2 - preincrement
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl; // 11
    
    result = ++counter; // Note the pre increment    
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 11
    
    // Breakdown of preincrement shown above (easy way to remeber):
    // counter = counter + 1 // 11
    // result = counter // 11

    //Example 3 - post-increment
    //counter = 10;
    //result = 0;
    //
    //cout << "Counter : " << counter << endl;    
    //result = counter++; // Note the post increment
    //
    //cout << "Counter : " << counter << endl;
    //cout << "Result : " << result << endl;

    // Breakdown of postincrement shown above (easy way to remeber):
    // result = counter // 10
    // counter = counter + 1 // 11

    
    //Example 4
    //counter = 10;
    //result = 0;
    //
    //cout << "Counter : " << counter << endl;
    //result = ++counter + 10;  // Note the pre increment
    //
    //cout << "Counter : " << counter << endl;
    //cout << "Result : " << result << endl;

    // Breakdown of preincrement shown above (easy way to remeber):
    // counter = counter + 1 // 11
    // result = counter + 10 // 21

    // Example 5
    //counter = 10;
    //result = 0;
    //
    //cout << "Counter : " << counter << endl;
    //
    //result = counter++ + 10;  // Note the post increment 
    //
    //cout << "Counter : " << counter << endl;
    //cout << "Result : " << result << endl;

    // Breakdown of postincrement shown above (easy way to remeber):
    // result = counter + 10 // 20
    // counter = counter + 1 // 11  
    
    cout << endl;
    return 0;

}
