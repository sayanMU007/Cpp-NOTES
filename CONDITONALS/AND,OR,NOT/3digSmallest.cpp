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
    if (x<y&& x<z)
    {
    cout<<"X is smallest among all";
    } else if(y<z && y<x){
    cout<<"Y is smallest among all";    
    }else{
        cout<<"Z is smallest among all";
    }
    
}