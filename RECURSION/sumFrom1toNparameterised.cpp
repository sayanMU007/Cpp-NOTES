#include<iostream>
using namespace std;
void sum(int n){
    int s=0;
    for(int i=1; i<=n; i++){
        s+=i;
    }
    cout<<s;
    return;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    sum(n);
} 