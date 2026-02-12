// print the following pattern
//    A 
//   ABC
//  ABCDE
// ABCDEFG


#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for ( int i = 1; i <= rows ; i++){
        for ( int nsp = 1 ; nsp <= rows-i; nsp++) {
            cout<<" ";
        }
        for ( int j = 1 ; j < 2*i ; j++){
            cout<<char(j+64);
        }
        cout<<endl;
    } 
 }