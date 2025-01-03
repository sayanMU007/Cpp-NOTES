#include<iostream>
using namespace std;

void explainPair(){
    // pairs
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    
    // pairs in multiple
    pair<int, pair<int, int>> p2= {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    //pairs in arrays
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}

int main(){
    explainPair();
    return 0;
}
