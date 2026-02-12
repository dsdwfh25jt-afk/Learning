// print the following output

//    A 
//   BAB
//  CBABC
// DCBABCD


#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for (int i=1 ; i <= rows ; i++) {

        for (int sp = 1 ; sp <= rows - i ; sp++) cout<<" ";
        for ( int j = i; j > -i+1 ; j--) {
            if (j < 1) {
                cout<<char(abs(j)+66);
            }else {
                cout<<char(abs(j)+64);
            }
            
        }
        cout<<endl;
    }
}