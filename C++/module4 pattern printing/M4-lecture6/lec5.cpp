/*
print the following pattern 

    1
   12
  123
 1234
12345

*/

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int i , j , k ;
    for ( i = 1 ; i <= rows ; i++) {
        // printing spaces where we dont want any out put 
        for ( j = 1 ;  j <= rows-i ; j++) {
            cout<<" ";
        }
        // printing k for numbers where we want to print numbers 
        for ( k = 1 ; k <= i ; k++) {
            cout<<k;
        }
        cout<<endl;
    }
}