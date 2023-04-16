// Your First C++ Program

#include <iostream>

consteval int get_number() {
    return 42;
}

int main() {
    constexpr int number = get_number();
    std::cout << "The number is " << number << std::endl;
    std::cout << "Hello World!";
    return 0;
}

// clang++-13 --version