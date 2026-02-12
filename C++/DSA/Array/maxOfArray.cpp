// find the maximum value of all element in the array 

#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {12,4,56,87,89,23,8,3,67,72,35,67,9,23,54,56,7,13,4,7,23,46,47,8,23,34,6,78,25,6,86,913,7};
    int size = sizeof(arr)/sizeof(arr[0]); 
   // int max = arr[0]; // we can also write 
    int max = INT_MIN ;  // for use this add climits lib

    for (int i = 0 ; i < size ; i++) {
        if (arr[i] > max) max = arr[i] ; 
    }

    cout << max <<endl;
}