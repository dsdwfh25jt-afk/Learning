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
    for ( int i =m-1; i >=0 ; i--) {
        int rotate = 0 ;
        for ( int j = n/2-1 ; j >=0  ; j--) {
            if (i%2==0) {
                int temp =   arr[i][j] ;
                arr[i][j] = arr[i][n-j-1];
                arr[i][n-j-1] = temp;

            }
        }
    }



cout << endl;

// priting the matrix 
     for ( int i = m-1; i>=0 ;i--) {
        for (int j=n-1; j>=0; j--) {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

