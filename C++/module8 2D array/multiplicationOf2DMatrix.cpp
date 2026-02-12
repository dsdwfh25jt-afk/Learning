#include<iostream>
using namespace std;
int main() {
    int arr[3][2]={1,2,3,4,5,6};
    int brr[2][4]={5,6,7,8,9,0,1,2};
    int mul[3][4];

    // travel through the resultant matrix for storing the vaules 
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            int sum=0;
            // k should be go upto 1st matrix's col and 2nd matrix's row size 
            // which are should be same 
            for(int k=0; k<2;k++){
                sum += arr[i][k] * brr[k][j];     
            }   
            mul[i][j]=sum;
        }
    }
    // printing the multiplication from resultant matrix
    for ( int i =0; i<3; i++){
        for ( int j =0 ; j< 4; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}