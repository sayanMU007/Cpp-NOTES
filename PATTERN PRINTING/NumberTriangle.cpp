#include <iostream>

using namespace std;

int main() {
   int n,m;
   cout<<"Enter Rows :";
   cin>>m;
   cout<<"Enter Columns :";
   cin>>n;
   for (int i=1; i <=n; i++)
   {
    for (int j=1; j<=i ; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   
}
 