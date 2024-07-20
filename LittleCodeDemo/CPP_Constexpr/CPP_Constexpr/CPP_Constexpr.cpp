#include <iostream>
#include <random>

constexpr int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {

    // Evaluated in runtime
    std::random_device rnd;
    int result_0 = factorial(rnd() % 6);
    std::cout << result_0 << std::endl;
    
    // Compile time this is get evalueated
    constexpr int result = factorial(5);
    std::cout << result << std::endl;
    return 0;
}
