#include <iostream>
using namespace std;

int main() {
    int n;  // Number of lines in the pattern
    cout<<"Enter n:";
    cin>>n;
    for (int i = n; i >= 1; i--) {
        // Print stars for each line
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Move to the next line
    }
    
    return 0;
}
