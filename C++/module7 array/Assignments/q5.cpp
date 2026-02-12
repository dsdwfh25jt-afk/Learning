// WAP to find the smallest missing possitive element in the sorted array that contains only possitive elements 

#include<iostream>
using namespace std;
int main () {
    int arr[]= {1,2,3,4,6,7,8,9,10,11,13,14,15,16,17,18};
    int size = sizeof(arr)/sizeof(arr[0]);

    for ( int i = 0 ; i < size ; i++) {
        if (arr[i+1] - arr[i]  > 1 ) {
            cout << "Elements are missing between index "<< i << " and "<<i+1<<endl;
            cout << "Element should be : "<<arr[i]+1<<endl;
            break;
        }
    }
}