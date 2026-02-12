// print the pascles triangle 
#include<iostream>
using namespace std;
int fact (int x ) {
    int factorial = 1 ;
    for (int i =1 ; i <= x; i++) factorial*=i;
    return factorial; 
}
int combination ( int n , int m) {
    int ncr = fact(n) / (fact(m) * fact(n-m));
    return ncr;
}
int main() {
    int rows ;
    cout<<"Enter the pascles truiangle rows : ";
    cin>>rows ;

    for ( int i = 0 ; i <= rows ; i++) {
        for (int sp = 1 ; sp <= rows-i; sp++ ) {
            cout<<" ";
        }
        for ( int j = 0 ; j <= i ; j++) {
            cout<<combination(i , j);
            cout<<" ";
        }
        cout<<endl;
    }
}