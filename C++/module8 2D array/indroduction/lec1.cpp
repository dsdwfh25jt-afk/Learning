#include<iostream>
using namespace std;
int main() {
    // Two Dimentional arrays 
    // Initialization with declareation of 2D array 
    int arr [3][3] = {{1,2,3},{4,5,6} ,{7,8,9}};
    // index of array will always be size-1 
    cout << arr[2][2] << endl;


    // Another way of Initialization with declaration 
    int arr2 [3][3] = {1,2,3,4,5,6,7,8,9}; 
    // it will run as same as previous array  called arr 
    cout << arr2[2][2] << endl;  

    // This is mandetory to give coloum number when Initialising and Declaration at the same time of the 2D array 
    // The Row number size can be empty it will not effect anything  
    int arr3 [] [3] = {1,2,3,4,5,6,7,8,9};  
    cout << arr3[2][2] << endl;  

    
}