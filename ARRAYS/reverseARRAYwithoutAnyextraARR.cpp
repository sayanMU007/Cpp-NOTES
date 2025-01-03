#include<iostream>
using namespace std;
int main(){
    int a[]={12,6,7,8,9,2};
    int n=sizeof(a)/4;
    for(int i=0; i<n; i++){
        a[i]=a[n-1-i];
        cout<<a[i]<<" ";
    }
}