#include<iostream>
using namespace std;
int main(){
    int x,y;
  cout<<"Enter x:";
  cin>>x;
  cout<<"Enter y:";
  cin>>y;
  if (x>0 && y>0)
  {
    cout<<"It lies in 1st quadrant";
  }else if(x<0 && y>0){
       cout<<"It lies in 2nd quadrant";
  }else if(x<0 && y<0){
       cout<<"It lies in 3rd quadrant";
  }else
  {
    cout<<"It lies in 4th quadrant";
  }
  
  
}