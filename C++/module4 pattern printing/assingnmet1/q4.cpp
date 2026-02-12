// print the following pattern 
// 1
// AB 
// 123
// ABCD 
// 12345

#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for ( int i =1 ; i <= rows+1; i++) {
        for ( int j = 1 ; j <= i ; j++) {
            if (i % 2 == 0 ) cout<<char(j+64);
            else cout<<j;
        }
        cout<<endl;
    }
}