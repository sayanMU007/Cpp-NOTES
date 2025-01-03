#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:"<<endl;
cin>>n;
if (n%5==0 && n%3==0)
{
 cout<<"It is divisible by 5 & 3"<<endl;
}else if(n%5==0){
    cout<<"Divisible by 5 only"<<endl;
}else if(n%3==0){
    cout<<"Divisible by 3 only"<<endl;
}else{
    cout<<"It is not divisible by 5 & 3"<<endl;
}

}