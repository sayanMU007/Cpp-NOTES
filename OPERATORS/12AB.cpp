#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n :";
    cin>>n;
      // Number of lines in the pattern
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Print numbers
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
        } else {
            // Print uppercase letters
            for (int j = 0; j < i; j++) {
                cout << char('A' + j);
            }
        }
        cout << endl;  // Move to the next line
    }
    
    return 0;
}
