// passing array in function 
#include<iostream>
using namespace std;
void display (int arr[] , int size) {
    for ( int i = 0 ; i < size ; i++) cout<<arr[i]<<" ";
    cout << endl;
} 

void change(int arr[], int size ) {
    for ( int i = 0 ; i < size ; i++) arr[i] = 7 ;
} 
int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // here we are passing address of the array which pointing to the first element of the array
    // array are not pass by value they are pass by reference 
    
    // without passing size we can not access the size of the array in function 
    display(arr , size );
    change(arr , size);
     display(arr , size );
    // cout<<endl;
    // cout<<arr<<endl;
}