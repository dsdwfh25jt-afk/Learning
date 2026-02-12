// find the minimum number of array 

#include<iostream>
using namespace std;
int main() {
    int arr[] = {12,3,45,6,6,-123,-3464,3,234,65,56787,345,34,56,0,23,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1 ; i < size ; i++) {
        if (arr[i] < min) min = arr[i];
    }

    cout<< min << endl;
}