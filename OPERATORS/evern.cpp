#include <iostream>

int main() {
    int number, sum = 0;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10; // Get the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum += digit;
        }
        number /= 10; // Remove the last digit
    }

    std::cout << "Sum of all even digits: " << sum << std::endl;

    return 0;
}
