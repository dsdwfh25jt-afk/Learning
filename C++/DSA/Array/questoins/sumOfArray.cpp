// print the sum of all the array elements 
#include<iostream>
using namespace std;
int main() {
    int arr[]= {12,23,43,5,56,7,4,78,89,5,23,5,23,6,478,23,73,785,823,8,2};
    // int arr[] = {1,2,3,4,5};

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]); // calculating size of array 

    int sum = 0 ;
    for ( int i = 0 ; i < sizeOfArray ;  i++) {
        sum += arr[i]; // adding array elements in sum 
    }

    cout<<sum<<endl; // printing sum 
}