// print the following pattern 

// ABCDEFG
// ABC EFG 
// AB   FG 
// A     G 

#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int i,j,k,l,m;
    for ( i=1 ; i < 2*rows ; i++) cout<<char(i+64);
    cout<<endl;

    for ( j = 1 ; j < rows ; j++) {
        for ( k = 1; k <= rows-j ; k++) cout<<char(k+64);
        for ( l = 1; l <= (j*2)-1 ; l++) cout<<" ";
        for ( m = (k+l)-1; m < 2*rows ; m++) cout<<char(m+64);
        cout<<endl;
    }
    
}