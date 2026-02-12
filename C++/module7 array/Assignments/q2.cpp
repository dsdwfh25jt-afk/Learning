// find the second largest element in the array in one pass 

#include <iostream>
#include <climits>

using namespace std;
int main () {
    int arr[] = {71481,2,3,4,5,6,10,7,8,9,9,74332,654,23,234,5,2354,6,43,45,5,5,5,67,788,65554,53,4,34,76,9,4,234} ; 
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int smax = INT_MIN ;

    for ( int i = 0 ; i < size ; i++) {
        if ( arr[i] > smax) {
            smax = arr[i];

             if (arr[i] > max ) {
            smax = max ;
            max = arr[i];
        }
        }
       

    }
    cout <<"Max : "<< max << endl;
    cout << "Second Max : "<< smax << endl;
}