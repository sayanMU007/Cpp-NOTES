#include<iostream>
using namespace std;
 int sum(int a, int b){
    return a+b;//return type
}
int main(){
    int a,b;
  cout<<"Enter first number: "; 
  cin>>a;
  cout<<"Enter second number: "; 
  cin>>b;   
  cout<<sum(a,b);
}