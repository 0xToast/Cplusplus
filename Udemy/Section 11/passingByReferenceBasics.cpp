// Section 11 - Pass-By-Reference
#include <iostream>

// Unlike Pass-By-Value, by leveraging Pass-By-Reference, we are able to manipluate values stored 
// within the variable.

void scaleNumber(int &num);
void swap(int& a, int& b);

void scaleNumber(int &num) {
	if (num > 100)
		num = 100;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int number{ 10000 };

	scaleNumber(number);
	std::cout
		<< number << "\n"; // 100

	//

	int x{ 10 }, y{ 20 };
	std::cout
		<< x << " " << y << "\n"; // 10 20 
	swap(x, y);
	std::cout
		<< x << " " << y << "\n"; // 20 10

	return 0;
}
