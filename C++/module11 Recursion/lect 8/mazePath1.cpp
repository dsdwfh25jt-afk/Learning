#include<iostream>
using namespace std;
int maze (int a , int b) {
    if (a==0 || b==0) return 1; 
    // if (b==2) return 1;
    return maze (a , b-1) + maze (a-1,b);
}
int count = 1;
void printMaze( int row , int col , string print ) {
    if (row < 0 || col < 0) return ; // if matrix goes below 0 then it will return back 
    if (row == 0 && col == 0) {  // if matrix goes to (0,0) then it will return the string.
        cout << count << " " << print << endl; 
        count++;
        return;
    }
    printMaze(row-1 , col , print+"Right "); // if row will goes minus then it will store Right in the string 
    printMaze(row, col-1, print+"Down ");  // if col will goes minus then it will store Left in the string 
}

int main () {
    int row , col ;
    cout << "Enter the number of Cols in the Matrix : ";
    cin >> col ;
    cout << "Enter the number of Rows in the Matrix : ";
    cin >> row ;

    cout << maze (row , col)<<endl;
    printMaze(row , col ,"");
}