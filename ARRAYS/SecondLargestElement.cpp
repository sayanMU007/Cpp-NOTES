#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "There is no second largest element." << endl;
        return 0;
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second_largest << endl;
    }

    return 0;
}
