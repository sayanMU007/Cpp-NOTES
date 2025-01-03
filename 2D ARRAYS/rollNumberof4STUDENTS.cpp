#include<iostream>
using namespace std;
int main(){
   int arr[4][2]={{1,77},{2,88},{3,99},{4,66}};
    for(int i=0; i<4; i++){//i for rows
    for(int j=0; j<2; j++){//j for columns
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}