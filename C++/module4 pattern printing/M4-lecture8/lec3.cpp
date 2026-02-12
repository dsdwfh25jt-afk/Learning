/*
print the  followong pattern 

    1
   121
  12321
 1234321
123454321

*/

#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter number of rows  : ";
    cin>>rows;
    int nsp = rows - 1 ;

    for(int i = 1 ; i <= rows ; i++) {
        for ( int j = 1 ; j <= nsp ; j++) {
            cout<<" ";
        }
        for (int k = 1 ; k <= i ; k++) {
            cout<<k;
        }
        for( int l = 1 ; l < i ; l++) {
            cout<<i-l;
        }
        cout<<endl;
        nsp--;
    }
}