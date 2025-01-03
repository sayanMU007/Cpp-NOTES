#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter n:";
    cin>>n;
    int a=1;
    for (int i=1; i<=(2*n-1); i+=2)
    {
    cout<<i<<endl;
    a*=2;
    }
}