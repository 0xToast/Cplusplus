// Section 11 - Recursive Functions

#include <iostream>

unsigned long long factorial(unsigned long long n) {
	if (n == 0)
		return 1; // Base case
	return n * factorial(n - 1); // Recursion Case
}

int main() {
	std::cout
		<< factorial(3) << "\n"; // 6
	return 0;
}
