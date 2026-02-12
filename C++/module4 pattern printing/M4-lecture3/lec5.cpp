// print the given pattern 
/* 
1
13
135
1357
13579
*/
#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for (int i = 1 ; i <= rows ; i++) {
        for ( int j = 1 ; j < i*2 ; j+=2) {
            cout<<j;
        }
        cout<<endl;
    }
}