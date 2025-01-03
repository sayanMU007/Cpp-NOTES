#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 3};
    int product = 1;
    for (int i = 0; i <= 2; i++) {
        product *= arr[i];
    }
    cout << product << endl;
    return 0;
}
