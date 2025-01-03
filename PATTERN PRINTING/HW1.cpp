#include <iostream>

using namespace std;

int main() {
    // Variable to store the starting character
    char start_char = 'A';

    // Outer loop to handle the rows
    for (int i = 0; i < 4; ++i) {
        // Inner loop to handle the columns
        for (int j = 0; j < 4; ++j) {
            cout << start_char;
        }
        // Move to the next line after printing 4 characters
        cout << endl;
        // Increment the starting character for the next row
        start_char++;
    }

    return 0;
}
