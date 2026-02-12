#include<iostream>
#include<climits> 
using namespace std;
int main() {

    int row,col;

    cout << "Enter the number of rows : ";
    cin >> row ;
    cout << "Enter the number of cols : ";
    cin >> col ;
    int arr[row][col];
    // int arr[4][4]= {1,2,3,54,5,6,7,8,9,10,11,12,17,34};
    int max = INT_MIN;

    for ( int i = 0 ; i < row ; i++) {
        for ( int j = 0 ; j < col ; j++) {
            if (max < arr[i][j]) max = arr[i][j];
            cout << arr[i][j] <<endl;
        }
    }

    cout << " Priting maximum number of array : " << max ;
}