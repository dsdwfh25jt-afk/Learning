#include<iostream>
using namespace std;
int main() {

    int row,col;
    cout << " Enter the number of rows : " ;
    cin >> row ;
    cout << " Enter the numeber of coloums : ";
    cin >> col ;
    int array [row][col];

    for ( int i = 0 ; i < row ; i-=-1) {
        for (int j = 0 ; j < col ; j-=-1) {
            cin >> array [i][j];
        }
    }

    
    for ( int i = 0 ; i < row ; i-=-1) {
        for (int j = 0 ; j < col ; j-=-1) {
            cout << array [i][j] << " ";
        }
        cout << endl;
    }
}