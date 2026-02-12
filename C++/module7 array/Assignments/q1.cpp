// calculate the produnct of all the elements in the given array 

#include<iostream>
using namespace std;
int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9,0,23,34,5,7,56,79,34,54,678,8,5};

    int sum = 0 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0 ; i < size ; i++) sum+=arr[i];

    cout << sum <<endl;
}