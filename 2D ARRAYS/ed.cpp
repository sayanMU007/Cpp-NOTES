#include <iostream>
using namespace std;

int main() {
    int arr[4][2] = {{76, 81}, {13, 76}, {82, 91}, {50, 67}}; // Example matrix
    int rows = 4;
    int cols = 2;
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of all elements in the matrix is: " << sum << endl;

    return 0;
}
