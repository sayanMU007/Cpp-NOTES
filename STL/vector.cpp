#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // add 1 in an empty array
    v.push_back(1);
    // add 2 dynamically in an empty array
    v.emplace_back(2);
    
    // vector of pairs
    vector<pair<int,int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // it will print 5 instances of 100
    vector<int> v3(5, 100);
    
    // it will initialize 5 elements with default values (0 for int)
    vector<int> v4(5);
    
    // it will print 5 instances of 20
    vector<int> v1(5, 20);
    
    // copying v1 into v2
    vector<int> v2(v1);
    
    // printing vector vec
    cout << "vec: ";
    for(auto &p : vec) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    
    // printing vector v
    cout << "v: ";
    for(auto &val : v) {
        cout << val << " ";
    }
    cout << endl;
    
    // printing vector v1
    cout << "v1: ";
    for(auto &val : v1) {
        cout << val << " ";
    }
    cout << endl;
    
    // printing vector v2
    cout << "v2: ";
    for(auto &val : v2) {
        cout << val << " ";
    }
    cout << endl;
    //iterators
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();
    return 0;
}
