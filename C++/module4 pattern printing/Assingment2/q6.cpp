// print the following pattern 

// *   *
//  * *
//   * 


#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for ( int i =0 ; i <= rows ; i++) {
        for (int j = 0; j <= 2*rows ; j++) {
            if( ( j ==i) || (i+j==2*rows) ) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}