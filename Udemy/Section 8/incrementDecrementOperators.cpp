//Section 8 - Increment and Decrement Operators

/*
Increment Operator ++
Decrement Operator --

Increments or decrements its operand by 1
Can be used with integers, floating point types and pointers

Post and Pre incrementation:
============================

Prefix: ++num
Postfix: num++

Although they do the same this (increment a value by 1).

Be careful of overusing this operator.
*/

#include <iostream>

int main() {

    int counter{10};
    
    // Example 1 - Simple Increment
    std::cout << "Counter: " << counter << std::endl; //10

    counter = counter + 1; 
    std::cout << "Counter: " << counter << std::endl; //11

    counter++;
    std::cout << "Counter: " << counter << std::endl; //12 

    ++counter;
    std::cout << "Counter: " << counter << std::endl; //13 
    std ::cout << std::endl;
    
    // Example 2 - Simple preincrement

    // Pre-incrementation Note:
    // ++counter means it will be incremented before it is used. 
    counter = 10;
    int result {0};
    
    std::cout << "Counter: " << counter << std::endl; //10

    result = ++counter; //Note the preincrement
    std::cout << "Counter: " << counter << std::endl; //11
    std::cout << "Result: " << result << std::endl; //11
    std ::cout << std::endl;

    // Breakdown of preincrement shown above (easy way to remeber):
    // counter = counter + 1 // 11
    // result = counter // 11
   

    // Example 3 - More complex pre-incrementation
    counter = 10;
    result = 0;

    std::cout << "Counter: " << counter << std::endl; //10
    result = ++counter + 10; // 11 + 10  
    std::cout << "Counter: " << counter << std::endl; //11
    std::cout << "Result: " << result << std::endl; //21
    std ::cout << std::endl;

    // Example 4 - Simple Postincrement
    // counter++ means it will be incremented after it is used. 
    counter = 10;
    result = 0;

    std::cout << "Counter: " << counter << std::endl; //10
    result = counter++; //Note the postincrement
    std::cout << "Counter: " << counter << std::endl; //11
    std::cout << "Result: " << result << std::endl; //10
    std ::cout << std::endl;

    // Breakdown of postincrement shown above (easy way to remeber):
    // result = counter // 10
    // counter = counter + 1 // 11


    // Example 5 - More complex post incrementation
    counter = 10;
    result = 0;

    std::cout << "Counter: " << counter << std::endl; //10
    result = counter++ + 10; //Note the postincrement
    std::cout << "Counter: " << counter << std::endl; //11
    std::cout << "Result: " << result << std::endl; //10

    return 0;
}
