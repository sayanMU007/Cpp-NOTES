#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"ENTER NUMBER:";
  cin>>n;
  int product=1;
  for (int i=1; i<=n;i++)
  {
    product*=i;
  }
  cout<<product;
}
