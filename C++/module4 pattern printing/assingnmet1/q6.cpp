// print the following pattern 
// ******
// **
// **
// ******

#include<iostream>
using namespace std;
int main() {
    int rows , cols ;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of cols : ";
    cin>>cols;
    int rows_cols ;
    rows_cols = cols - rows ;
    for ( int i = 1 ; i <= rows ; i++) {
        if (i == 1 || i == rows) {
              for ( int j = 1; j <= cols ; j++) {
                    cout<<"*";
                } 
        }else {
            for ( int k = 1; k <= rows_cols ; k++) {
            cout<<"*";
            }

        }
      
        
        cout<<endl;
    }
}
