// print the following pattern 
// 1
// 21
// 321
// 4321


#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    for ( int i = 1 ; i <= rows ; i++) {
        for ( int j = i ; j >0 ; j--) {
            cout<<j;

        }
        cout<<endl;
    }
}