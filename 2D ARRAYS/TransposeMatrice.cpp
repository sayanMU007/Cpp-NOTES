#include<iostream>
using namespace std;
int main(){
   int arr[2][3];
   arr[0][0]=6;
   arr[0][1]=1;
   arr[0][2]=2;
   arr[1][0]=4;
   arr[1][1]=3;
   arr[1][2]=5;
   for(int j=0; j<3; j++){//i for rows
    for(int i=0; i<2; i++){//j for columns
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}