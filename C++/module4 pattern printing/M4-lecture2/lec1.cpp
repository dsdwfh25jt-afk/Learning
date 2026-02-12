// print squar pattern
#include<iostream>
using namespace std;
int main() {
    int RC ;
    cout<<"Enter the number of rows and coloms : ";
    cin>>RC;
    for ( int i = 1 ; i<=RC; i++) {
        for( int j = 1 ; j <= RC; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}