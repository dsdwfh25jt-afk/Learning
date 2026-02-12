// leet code question number 75 
#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector <int> vec= {1,0,2,1,2,1}; 
    for ( int i= 0 ; i < vec.size()-1 ; i++ ) cout << vec[i] << " ";
    cout << endl;
    int i = 0 ; 
    int j = vec.size()-1;
    int mid = 0;

    while (mid <= j) {
        if ( vec[mid] == 0) {
              int temp1 = vec[mid] ;
             vec[mid] = vec[i] ;
             vec[i] = temp1 ;
            i++;
            mid++;
        }
        if (vec[mid] == 1) mid ++ ;
        
        if ( vec[mid] == 2) {
              int temp = vec[mid] ;
             vec[mid] = vec[j] ;
             vec[j] = temp ;
             j--;
        }
          
    }

    for ( int i= 0 ; i < vec.size()-1 ; i++ ) cout << vec[i] << " ";
    cout << endl;
}