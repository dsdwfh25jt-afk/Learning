#include<iostream>
using namespace std;
int main() {
    int n,m;

    cout << "Enter the number of rows of matrix : ";
    cin >> m;
    cout << "Enter the number of culoums : ";
    cin>>n;

    int arr[m][n];
    cout<< "Enter the matrix : "<<endl;
    for ( int i = 0; i < n ;i++) {
        for (int j=0; j< m; j++) {
            cin >> arr[i][j];
        }
    }
// forming matrix
    for ( int i = 0; i < m ; i++) {
        int rotate = 0 ;
        for ( int j = 0 ; j < n/2 ; j++) {
            if (i%2!=0) {
                int temp =   arr[j][i] ;
                arr[j][i] = arr[n-j-1][i];
                arr[n-j-1][i] = temp;

            }
        }
    }



cout << endl;

// priting the matrix 
     for ( int i = 0; i < n ;i++) {
        for (int j=0; j< m; j++) {
           cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

