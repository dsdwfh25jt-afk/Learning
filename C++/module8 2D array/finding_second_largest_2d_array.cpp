#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr [3][3] = {1,3,5,7,69,67,3,68,8};

    int max = INT_MIN;
    int smax =0 ;
    for ( int i = 0 ; i < 3; i++) {
        for ( int j = 0 ; j < 3 ; j++) {
            if (max < arr[i][j] ) { 
                smax = max ; 
                max = arr[i][j];     
            }else if (smax < arr[i][j]) smax = arr[i][j];
        }
    }
    cout << max << endl;
    cout << smax << endl;
}