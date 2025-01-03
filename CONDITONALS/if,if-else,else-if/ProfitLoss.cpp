#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cp:";
    cin>>cp;
    cout<<"Enter sp:";
    cin>>sp;
    if (sp>cp)
    {
    cout<<"PROFIT IS:"<<sp-cp;
    }else if(cp>sp){
      cout<<"LOSS IS:"<<cp-sp;
    }
    else{
        cout<<"No profit, No loss";
    }
    
}
