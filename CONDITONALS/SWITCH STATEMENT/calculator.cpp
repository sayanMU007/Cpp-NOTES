#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    char op;
    cin>>op;//operation sign
    cout<<"Enter y:";
    cin>>y;
    switch (op)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
    default:
    cout<<"Invalid";
        break;
    }
}