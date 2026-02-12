#include<iostream>
using namespace std;
int main() {

    int m, n;
    cout << "Enter the number of rows : ";
    cin>> m;
    cout << "Enter the number of cols : ";
    cin>> n;

    int arr[m][n];
    
      for ( int i =0 ; i < m; i++) {
        for ( int j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int minRow = 0 ;
    int minCol = 0 ;
    int maxRow = m -1 ;
    int maxCol = n -1 ;

  

    
    while(minRow <= maxRow && minCol <= maxCol) {
        // left
        for ( int  j = minCol; j <= maxCol; j++ ){
            cout << arr[minRow][j];

        }
        minRow++;
        if (minRow > maxRow || minCol > maxCol) break;
        
        // Down
        for (int k = minRow; k <= maxRow; k++  ) {
            cout << arr[k][maxCol];
        }
        maxCol--;
        if (minRow > maxRow || minCol > maxCol) break;

        // right 
        for ( int  i = maxCol; i >=minCol; i-- ){
            cout << arr[maxRow][i];

        }
        maxRow--;
        if (minRow > maxRow || minCol > maxCol) break;

        // up
        for (int l = maxRow ; l >= minRow; l--) {
            cout << arr[l][minCol];
        }
        minCol++;
      

    }

        
        
        
        
        
       
    

}