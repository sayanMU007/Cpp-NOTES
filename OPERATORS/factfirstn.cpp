#include <iostream>

using namespace std;

int main() {
    int n; // You can change this value to any number you like
    cout<<"Enter n:";
    cin>>n;
    unsigned long long factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial = 1; // Reset factorial for the current number
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is " << factorial << endl;
    }

    return 0;
}
