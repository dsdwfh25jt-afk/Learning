// printitng array with loops 
#include<iostream>
using namespace std;
int main() {
    int arr[10];

    // taking input using loops
    cout<<"Enter the elements of array ..."<<endl;
    for ( int i = 0 ; i < 10 ; i++) 
        cin >> arr[i];
    cout<<"Printing the array of elements ... "<<endl;
    // prtinting the array using loops
    for ( int i = 0; i < 10 ; i++) cout<< arr[i]<<endl;
}