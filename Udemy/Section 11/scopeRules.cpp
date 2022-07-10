// Section 11 - Scope Rules

#include <iostream>

void localExample(int);
void globalExample();
void staticLocalExample();

int num{ 300 }; // Global variable - declared outside any class or function

void localExample(int x) {
	int num{ 1000 }; // local to localexample function
	std::cout
		<< "\nLocal num is: " << num << " in localExample - start" << "\n"; // localExample func will use local variables first - 1000
	num = x;
	std::cout
		<< "Local num is: " << num << " in localExample - end" << "\n"; // 10 & 20
	// num1 within Main is not in scope and cannot be used here.
}

void staticLocalExample() {
	static int num{ 5000 }; // local to staticLocalExmaple - static variable retains it's value between calls similar to the global variable.
							            // This is very useful as the varibable's scope is local and prevents accidental changes which global variables are prone to.
	std::cout
		<< "\nLocal static num is: " << num << " in staticLocalExample - start" << "\n";
		num += 1000;
		std::cout
			<< "Local static num is: " << num << " in staticLocalExample - end" << "\n";
}

void globalExample() {
	std::cout
		<< "\nGlobal num is: " << num << " in globalExample - start" << "\n"; 
	num *= 2;
	std::cout
		<< "Global num is: " << num << " in globalExample - end" << "\n"; 
}


int main() {

	int num{ 100 }; // Local to Main
	int num1{ 500 }; // Local to Main

	std::cout
		<< "Local num is: " << num << " in main" << "\n"; // 100

	{ // This creates a new level of scope
		int num{ 200 };
		std::cout
			<< "Local num is: " << num << " in the inner block within main" // 200
			<< "\nInner block can see out side variables - num1 is: " << num1 << "\n"; // 500
	}

	// Main cannot see inner block's variables
	std::cout
		<< "Local num is: " << num << " in main" << "\n"; // 100
	
	localExample(10); // Will print out 1000 and 10
	localExample(20); // Will print out 1000 and 20 

	// Note the variable does not get re-initialised back to 300 again
	// When the first globalExample func runs, the global variable num's value will be 600
	globalExample(); // 300 & 600
	globalExample(); // 600 & 1200

	return 0;
}
