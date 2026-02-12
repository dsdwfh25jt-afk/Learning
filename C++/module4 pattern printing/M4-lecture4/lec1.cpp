// printing alphabet pattern 
    /*
    ABCD
    ABCD
    ABCD
    ABCD
    */

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter Number of rows : ";
    cin>>rows;

    for (int i = 1; i <= rows ; i++) {
        for ( int j = 1 ; j <= rows ; j++) {
            cout<<char(j+64);
        }
        cout<<endl;
    }
}