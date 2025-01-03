#include<iostream>
using namespace std;
int main(){
    string s="ansh";
    cout<<"ORIGINAL STRING :"<<s<<endl;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<"MODIFIED STRING :"<<s<<endl;
}