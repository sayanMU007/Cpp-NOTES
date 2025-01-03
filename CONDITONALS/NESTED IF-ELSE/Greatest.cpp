#include<iostream>
using namespace std;                              //syntax:
int main(){                                       //if(condition){
    int a,b,c;                                    //code(another round of if-else)
    cout<<"Enter a:"<<endl;                      //}else{
    cin>>a;                                      //code(another round of if-else)
    cout<<"Enter b:"<<endl;                    //}
    cin>>b;                                      //
    cout<<"Enter c:"<<endl;                     //
    cin>>c;
    if(a>b){
       if (a>c)
       {
        cout<<"A is greatest among all";
       }else
       {
        cout<<"C is greatest among all";
       }
    }
      else
      {
        if (b>c)
        {
            cout<<"B is greatest";
        }
        else
        {
            cout<<"C is greatest";
        }
        
      }
      
}