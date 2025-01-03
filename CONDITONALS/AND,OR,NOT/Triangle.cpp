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
    if ((x+y)>z && (y+z)>x && (z+x)>y)
    {
        cout<<"Sides are equal hence they can be a triangle";
    }else{
        cout<<"Sides aren't equal hence they can't be a triangle";
    }
    
}