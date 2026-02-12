// null pointer 
#include<iostream>
using namespace std;
int main() {
    int *pointer = NULL ;
    int *pointer1 = 0 ;
    int *pointer2 = '\0';
    // NULL = 0 ; 
    // NULL , 0 , '\0' are all null poiners which means 0 
    cout << pointer <<endl;
    cout << pointer1 <<endl;
    cout << pointer2 <<endl;


    // this will increacse the address by 4 bytes 
    pointer++;
    cout  << pointer <<endl;
}
