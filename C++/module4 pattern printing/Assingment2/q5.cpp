//  print the following pattern 

//  1234321
//  123 321
//  12   21
//  1     1

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    // rows 1
    for ( int i = 1 ; i < 2*rows ; i++ ) {
        if (i>rows) {
            cout<<2*rows-i;
        }else {
            cout<<i;
        }
    }
    cout<<endl;

    // remaining part  
    int j ,k, l, m;
    for ( j =1; j < rows ; j++){
        // first triangle of numbers 
        for (k=1; k <= rows-j ; k++) {
            cout<<k;
        }
        // middle triangle of spaces 
        for (l = 1; l < 2*j; l++) {
            cout<<" ";
        }
        // last triangle of numbers 
        for ( m = rows-j; m > 0 ; m-- ) {
            cout<<m;
        }

        cout<<endl;
    }
}