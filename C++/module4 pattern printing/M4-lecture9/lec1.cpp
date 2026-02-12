/*
print the following pattern 

  *
 ***
*****
 ***
  *

*/
#include<iostream>
using namespace std;
int main() {
    int row ;
    cout<<"Enter the number of rows : ";
    cin>>row;
    int nsp = row - 1;
    int nst = 1 ;


    for (int i = 1; i < 2*row ; i++) {
        for ( int j = 1; j <= nsp  ; j++) {
            cout<< " ";
        }
        for ( int k = 1 ; k <= nst ; k++) {
            cout<<"*";
        }
        cout<<endl;

    if (i>=row) {
        nsp++;
        nst -=2;
    }
    else{
         nsp--;
         nst+=2;
    }

    }
}


