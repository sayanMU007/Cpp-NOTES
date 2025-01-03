#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter x:"<<endl;
    cin>>x;
    cout<<"Enter y:"<<endl;
    cin>>y;
    cout<<"Enter z:"<<endl;
    cin>>z;
    if (x>y&& x>z)
    {
    cout<<"X is greatest among all";
    } else if(y>z && y>x){
    cout<<"Y is greatest among all";
    }else{
        cout<<"Z is greatest among all";
    }
    
}