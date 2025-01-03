#include <iostream>
#include <cmath>
using namespace std;

int pow(int a, int b) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        int half_pow = pow(a, b / 2);
        return half_pow * half_pow;
    } else {
        return a * pow(a, b - 1);
    }
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << pow(a, b);
    return 0;
}
