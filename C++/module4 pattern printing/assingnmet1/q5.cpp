// print the folowing pattern
// *
// **
// ***
// ****
// ***
// **
// *


#include<iostream> 
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for ( int i = rows; i>= -(rows-1) ; i--) {
        for ( int j = (rows-1) ; j >= abs(i); j--) {
            cout<<"*";
        }
        cout<< endl;
    }
}