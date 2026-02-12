// print the following pattern 
//    1
//   123
//  12345
// 1234567

#include<iostream>
using namespace std;
int main() {
    int rows ; 
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i = 1 ; i <= rows ; i++) {
        for ( int k = 1 ; k <= rows-i; k++) {
            cout<<" ";
        }
        for ( int j = 1 ; j < 2*i ; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}