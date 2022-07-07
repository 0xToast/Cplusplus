// Section 11 - Pass-by-Reference - Exercises

#include <iostream>
#include <vector>
#include <string>

void passByRef1(int &num);
void passByRef2(std::string &s);
void passByRef3(std::vector<std::string> &v);
void printVector(const std::vector<std::string> &v); // Note the const here. We are removing the possibility of changing values within the vector.

void passByRef1(int &num) {
	num = 1000;
}

void passByRef2(std::string &s) {
	s = "Changed";
}

void passByRef3(std::vector<std::string> &v) {
	v.clear(); // deletes all vector elements
}

void printVector(const std::vector<std::string>& v) {
	for (auto s : v)
		std::cout
			<< s << " ";
}

int main() {
	int num{ 10 };
	int anotherNum{ 20 };

	std::cout
		<< "num before calling passByRef1: " << num << "\n"; // 10
	passByRef1(num);
	std::cout
		<< "num after calling passByRef1: " << num << "\n"; // 1000

	std::cout
		<< "\nanotherNum before calling passByRef1: " << anotherNum << "\n"; // 20
	passByRef1(anotherNum);
	std::cout
		<< "anotherNum before calling passByRef1: " << anotherNum << "\n"; // 1000

	// String example

	std::string name{ "Toast" };
	
	std::cout
		<< "\nname before calling passByRef2: " << name << "\n"; // Toast
	passByRef2(name);
	std::cout
		<< "name after calling passByRef2: " << name << "\n"; // Changed

	// Vector example

	std::vector<std::string> stooges{ "Larry","Moe","Curly" };
	std::cout
		<< "\nstooges before calling passByRef3: "; 
	printVector(stooges); // Larry Moe Curly
	passByRef3(stooges);
	std::cout
		<< "\nstooges after calling passByRef3: ";
	printVector(stooges); // Blank as it was cleared by passByRef3

	return 0;
}
