// find the number of elements that are greater than the value of x 

#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {12,4,56,87,89,23,8,3,67,72,35,67,9,23,54,56,7,13,4,7,23,46,47,8,23,34,6,78,25,6,86,913,7};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int x = 10 ;
    int count = 0 ;
   
    for (int i = 0 ; i < size ; i++) {
        if (arr[i] > x) count++;      
    }
    cout << count <<endl;
}