#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {
	
	int var = 10;
	LOG(var);
	
	int* ptr = &var;

	*ptr = 8;
	LOG(var);


	// Heap
	char* buffer = new char[9];

	memset(buffer, 0, 9);

	delete[] buffer;


	std::cin.get();
}