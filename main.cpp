// Your First C++ Program

// include the iostream library
#include <iostream>

// this function gets the number 42
consteval int get_number() {
    return 42;
}

// this function prints the number systems
consteval int example() {
     // decimal
    int decimal = 42;
    // binary
    int binary = 0b101010;
    // octal
    int octal = 052;
    // hexadecimal
    int hexadecimal = 0x2A;

    // print the numbers
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Hexadecimal: " << hexadecimal << std::endl;
    return 42;
}


// function that initiallizes a chat in the console
int chat() {
    // ask the user where he lives
    std::string country;
    std::cout << "Where do you live? ";
    std::cin >> country;
    std::cout << "I've hear that " << country<< " is very nice!" << std::endl;
    return 42;
}

// main function
int main() {
    
    return 0;
}