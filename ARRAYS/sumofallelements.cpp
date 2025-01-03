#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i <= 2; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}
