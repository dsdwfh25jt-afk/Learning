// find the reapeating element in aray 
#include<iostream>
using namespace std;
int main () {
    int n = 5 ;
    int arr [6] = {1,2,3,2,4,5};
    int sum = 0 ;
    for ( int i = 0 ; i < 6 ; i++) {
        sum += arr[i];
    }
    int totaln = 0 ;
    totaln = ((n+1)*n)/2 ; 
    
    cout << sum - totaln <<endl;
}