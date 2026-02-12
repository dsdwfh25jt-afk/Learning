#include<iostream>
using namespace std;
int main() {
    int arr[3][3]= {1,2,4,6,8,9,0,6,4};
    int brr[3][3]= {23,45,7,4,7,4,73,23,6,};
    int sum[3][3];
    for ( int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }
    // printing sum 
    for ( int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}