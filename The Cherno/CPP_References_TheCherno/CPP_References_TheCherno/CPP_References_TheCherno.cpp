#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void increment_with_pointer(int* a) {
    (*a)++;
}


void increment_with_reference(int& ref) {
    ref++;
}

int main()
{
    // Basic reference
    int a = 5;
    int& ref = a;
    LOG(ref);

    // Increment a value throw a function with pointer
    int value_1 = 1;
    increment_with_pointer(&value_1);
    LOG(value_1);

    int value_2 = 1;
    increment_with_reference(value_2);
    LOG(value_2);

}
