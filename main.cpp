// Your First C++ Program

// include the iostream library
#include <iostream>

// this function gets the number 42
consteval int get_number() {
    return 42;
}

// this function prints the number systems
int example() {
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

void print_prefix_postfix_example() {
    // store number 1 in a variable
    int number1 = 1;

    // print the number
    std::cout << "Number: " << number1 << std::endl;
    // print postfix
    std::cout << "Postfix: " << number1++ << std::endl;
    // print the number
    std::cout << "Number: " << number1 << std::endl;
    // print the prefix
    std::cout << "Prefix: " << ++number1 << std::endl;
    // print the number
    std::cout << "Number: " << number1 << std::endl;
}

double celcius_to_fahrenheit(double celcius) {
    return celcius * 1.8 + 32;
}

int quiz_degrees() {
    // read the input celcuis degrees
    double celcius;
    std::cout << "Enter the celcius degrees: ";
    std::cin >> celcius;
    // convert the celcius degrees to fahrenheit
    double fahrenheit = celcius_to_fahrenheit(celcius);
    // print the fahrenheit degrees
    std::cout << "Fahrenheit degrees: " << fahrenheit << std::endl;

    return 0;
}

int quiz_volume() {
    // read the length, height and width of the box
    double length, width, height;
    std::cout << "Enter the length, width and height of the box: ";
    std::cin >> length >> width >> height;
    // calculate the base area of the box
    double area = length * width;
    // print the base area of the box
    std::cout << "Base area: " << area << std::endl;
    // calculate the volume of the box
    double volume = area * height;
    // print the volume of the box
    std::cout << "Volume: " << volume << std::endl;
    
    return 0;
}





// main function
int main() {
    // declare a const variable
    const int number = 42;
    // try to change the value of the variable
    // print the number
    std::cout << "Number: " << number << std::endl;


    return 0;
}