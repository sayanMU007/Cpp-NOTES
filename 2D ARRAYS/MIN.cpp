#include <iostream>
#include <limits>
using namespace std;

int main() {
    int arr[4][2] = {{76, 81}, {13, 76}, {82, 91}, {50, 67}}; 
    int minElement = numeric_limits<int>::max(); 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }
    }
    cout << "The minimum element in the matrix is: " << minElement << endl;
}
