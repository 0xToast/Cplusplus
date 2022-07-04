// Section 11 - Passing Arrays to Functions

#include <iostream>

void printArray (const int arr[], size_t size);
void setArray (int arr[], size_t size, int value);

void printArray(const int arr[], size_t size) {         // We can make arrary in print Array a const to prevent any changes to it within the print array function.
    for (size_t i{0}; i < size; ++i)
        std::cout
            << arr[i] << " ";
    std::cout
        << "\n";
}

void setArray(int arr[], size_t size, int value){
    for (size_t i{0}; i < size; ++i)
        arr[i] = value; // Sets each element in the array to the value within value.
}

int main (){
    // This value will be modified as it is passing-by-reference. 
    int myScore[] {100, 98, 90, 86, 84};

    printArray(myScore, 5); // 100 98 90 86 84
    setArray(myScore, 5, 10); // Sets 5 elements in the array to the value of 10
    printArray(myScore, 5); // 10 10 10 10 10

    return 0;
}
