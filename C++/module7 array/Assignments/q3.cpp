// find the minimum value of all elements in the array 

#include <iostream>
#include <climits>
using namespace std;
int main() {
      int arr[] = {71481,2,3,4,5,6,10,7,8,9,9,74332,654,23,234,5,2354,6,43,45,5,5,5,67,788,1,65554,53,4,34,76,9,4,234} ; 
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX;
    

    for ( int i = 0 ; i < size ; i++) {
        if ( arr[i] < min) min = arr[i];
    }

    cout << min << endl;

}