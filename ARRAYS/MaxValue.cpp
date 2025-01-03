#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3,6,5};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>mx) mx=arr[i];
    }
    cout<<mx;
}
