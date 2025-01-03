#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter n:";
cin>>n;
while (n!=0)
{
    int store=n%10; 
    n/=10;
    sum+=store;
}
  cout<<sum;
}