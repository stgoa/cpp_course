// Your First C++ Program

// include the iostream library
#include <iostream>
#include <bitset>
#include <vector>
#include <array>
#include <limits>
#include <iterator>


// this function gets the number 42
consteval int get_number() {
    return 42;
}

// this function prints the number systems
void enumber_systems() {
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

}

// function that initiallizes a chat in the console
void chat() {
    // ask the user where he lives
    std::string country;
    std::cout << "Where do you live? ";
    std::cin >> country;
    std::cout << "I've hear that " << country<< " is very nice!" << std::endl;
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

void quiz_degrees() {
    // read the input celcuis degrees
    double celcius;
    std::cout << "Enter the celcius degrees: ";
    std::cin >> celcius;
    // convert the celcius degrees to fahrenheit
    double fahrenheit = celcius_to_fahrenheit(celcius);
    // print the fahrenheit degrees
    std::cout << "Fahrenheit degrees: " << fahrenheit << std::endl;

}

void quiz_volume() {
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
    
}

void implicit_conversion() {
    int units_sold = 42;
    double price = 10.1;
    auto revenue = units_sold * price;

    std::cout << "Revenue: " << revenue << std::endl;

    std::cout << "Revenue second: " << units_sold * price << std::endl;
}

void explicit_conversion() {
    double units_sold = 42.6;
    double price = 10.1;
    int revenue = units_sold * price;
    // implicit conversion
    std::cout << "Revenue: " << revenue << std::endl;

    // explicit conversion
    revenue = static_cast<int>(units_sold) *  static_cast<int>(price);

    std::cout << "Revenue second: " << revenue<< std::endl;
}


void bit_shifting(){
    unsigned short int value = 64;

    // print in base 10
    std::cout << "Value base 10: " << value << std::endl;

    // print in base 2
    std::cout << "Value base 2: " << std::bitset<16>(value) << std::endl;

    // shift bits right
    value = value >> 1;
    // print base 2
    std::cout << "Value base 2: " << std::bitset<16>(value) << std::endl;

    // shit left twice
    value = (value << 2);

    // print base 2
    std::cout << "Value base 2: " << std::bitset<16>(value) << std::endl;

    // print base 10
    std::cout << "Value base 10: " << value << std::endl;

}


// the following function 'twoSum' recieves an array "nums" of integers and returns an array with the two largest values in nums

std::array<int, 2> findTwoLargest(const std::array<int, 5>& nums) {
    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for (const auto& num : nums) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest) {
            secondLargest = num;
        }
    }

    return {largest, secondLargest};
}


int global_var{23};

void some_function(){
    std::cout << "inside the function, global_val: " << global_var << std::endl;
}

int leetcode() {
    std::array<int, 5> nums = {3, 1, 5, 2, 4};
    std::array<int, 2> result = findTwoLargest(nums);

    // Print the two largest values
    for (const auto& num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

int main() {
    some_function();
    return 0;
}

// main function
// int main() {
//     // try example
//     int nums[] = {2,7,11,15};
//     int target = 9;
    
//     // print the result
//     std::cout << "twoSum: " <<  twoSum(nums) << std::endl;

//     return 0;
// }