#include <iostream>
using namespace std;
int main(){
    int x=3;
    int *p=&x;
    *p=23;
    cout<<*p;
}
