#include<iostream>
using namespace std;
int main() {
    int x = 5 ;
    int *ptr = &x;
    int **p = &ptr;

    cout << x <<endl; // refer value of x 
    cout << ptr << endl; // refer address of x 
    cout << *ptr <<endl; // refer value of x 
    cout << p << endl; // refer address of ptr which stores addrees of x
    cout << *p <<endl; // refer address of x which is in ptr 
    cout << **p << endl; // refer value of x which is in ptr in address 

}