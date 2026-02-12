/*
print the following pattern 

*******
*** ***
**   **
*     *

*/

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int nsp = 1 ;
     
    for( int j = 1 ; j < 2*rows ; j++) cout<<"*";
    
    cout<<endl;
    for( int i = 1 ; i < rows ; i++) {
        for ( int k =1; k <= rows-i; k++) cout<<"*";
        
        for ( int l = 1 ; l <= nsp ; l++) cout<<" ";
        
        for ( int k =1; k <= rows-i; k++) cout<<"*";
        cout<<endl;
        nsp+=2;
    }
}