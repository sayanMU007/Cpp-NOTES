#include<iostream>
using namespace std;                              
int main(){                                       
    int Ram,shyam,Ajay;                                    
    cout<<" age of Ram:"<<endl;                      
    cin>>Ram;                                      
    cout<<" age of Shyam:"<<endl;                    
    cin>>shyam;                                      
    cout<<" age of Ajay:"<<endl;                     
    cin>>Ajay;
    if(Ram<shyam){
       if (Ram<Ajay)
       {
        cout<<"Ram is Youngest among all";
       }else
       {
        cout<<"Ajay is Youngest among all";
       }
    }
      else
      {
        if (shyam<Ajay)
        {
            cout<<"Shyam is Youngest";
        }
        else
        {
            cout<<"Ajay is Youngest";
        }
        
      }
      
}