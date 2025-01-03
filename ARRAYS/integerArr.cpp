#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    // Create an array to store the squares
    int* squares = new int[n]; // Using dynamic array allocation

    // Fill the array with squares of natural numbers
    for (int i = 1; i <= n; ++i) {
        squares[i-1] = i * i;
    }

    // Print the elements of the array
    cout << "Squares of natural numbers up to " << n << " are: ";
    for (int i = 0; i < n; ++i) {
        cout << squares[i] << " ";
    }
    cout << endl;

    // Clean up dynamically allocated memory
    delete[] squares;

    return 0;
}
