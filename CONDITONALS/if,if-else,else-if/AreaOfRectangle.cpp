#include<iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"Enter l:"<<endl;
    cin>>l;
    cout<<"Enter b:"<<endl;
    cin>>b;
    area=l*b;
    cout<<"AREA:"<<area<<endl;
    perimeter=2*(l+b);
    cout<<"PERIMETER:"<<perimeter<<endl;
    if (area>perimeter)
    {
      cout<<"Area is greater than perimeter";
    }else{
        cout<<"Perimeter is greater than Area";
    }
    
    
}