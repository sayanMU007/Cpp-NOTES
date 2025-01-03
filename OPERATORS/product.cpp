#include<iostream>
using namespace std;
int main(){
int n,product=1;
cout<<"Enter n:";
cin>>n;
while (n!=0)
{
    int store=n%10; 
    n/=10;
    product*=store;
}
  cout<<product;
}