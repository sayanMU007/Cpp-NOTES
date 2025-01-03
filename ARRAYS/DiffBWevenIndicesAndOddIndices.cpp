#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int SumOfEven = 0, SumOfOdd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) 
            SumOfEven += arr[i];
        else 
            SumOfOdd += arr[i];
    }

    cout << "Sum of all even elements: " << SumOfEven << endl;
    cout << "Sum of all odd elements: " << SumOfOdd << endl;
    cout << "DIFFERENCE: " << SumOfEven - SumOfOdd << endl;

    return 0;
}
