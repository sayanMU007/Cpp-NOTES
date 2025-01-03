#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (n choose k)
int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print Pascal's Triangle values
        for (int j = 0; j <= i; j++) {
            cout << binomialCoeff(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    printPascalsTriangle(n);

    return 0;
}
 