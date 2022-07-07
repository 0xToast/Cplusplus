// Section 11 - Pass-By-Reference Vectors Example

#include <vector>

void print(const std::vector<int> &v);

void print(const std::vector<int> &v) {
	for (auto num : v)
		std::cout << num << "\n";
}

int main() {
	std::vector<int> data{ 1,2,3,4,5 };
	
	print(data); // 1,2,3,4,5
	
	return 0;
}
