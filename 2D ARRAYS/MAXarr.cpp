#include <iostream>
#include<limits>
using namespace std;

int main() {
    int arr[4][2]={{76,81},{13,76},{82,91}};
    int mx= INT8_MIN;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}
