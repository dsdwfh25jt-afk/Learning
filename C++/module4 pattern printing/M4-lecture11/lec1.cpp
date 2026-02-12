
/*
print the following pattern 

1234567
123 567
12   67
1     7

*/

#include<iostream>
using namespace std;
int main() {
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    int nsp = 1 ;
    int k,i;
    
   
    
    
    for( i = 1 ; i < 2*rows ; i++) {
         
        for ( int k =1; k < 2*rows; k++) {
            int a = i;
            int b = k;

            if (i>rows)  a = 2*rows - a ;
            if (k>rows)  b = 2*rows - b ;   
            cout<<rows+1-min(a,b);   
        }
        cout<<endl;
    }
}