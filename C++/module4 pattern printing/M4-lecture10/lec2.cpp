/*
print the following pattern 

1234567
123 567
12   67
1     7

*/

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int nsp = 1 ;
    int k,l,s,i;
    for( int j = 1 ; j < 2*rows ; j++) cout<<j;
    
    cout<<endl;
    for( i = 1 ; i < rows ; i++) {
        for ( k =1; k <= rows-i; k++) cout<<k;  
        for ( l =1; l <= nsp ; l++) cout<<" ";
        for ( s =1; s <= rows-i; s++) cout<<(k+s+l)-2;
        cout<<endl;
        nsp+=2;
    }
}