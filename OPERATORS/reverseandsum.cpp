#include <iostream>

int main() {
    int number, reversedNumber = 0, originalNumber;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    originalNumber = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        int digit = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append the digit to the reversed number
        number /= 10; // Remove the last digit
    }

    // Calculate the sum of the original number and its reverse
    int sum = originalNumber + reversedNumber;

    std::cout << "Original number: " << originalNumber << std::endl;
    std::cout << "Reversed number: " << reversedNumber << std::endl;
    std::cout << "Sum of the original number and its reverse: " << sum << std::endl;

    return 0;
}
