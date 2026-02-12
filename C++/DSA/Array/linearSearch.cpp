// find the element x in the array. Take array and x as  input 

#include<iostream>
using namespace std;
int main() {
    int x ; 
    cout <<"Enter the number that you want to search in the array : ";
    cin>>x;
    bool flag = false ;
    int arr[] = {1,2,3,4,5,6,7,8,9,0,10,11,12,122,13,14,1,51,61,71,8,19,10,21,21,21,23,23,23,42,45,7,325,123}; 
    int size = sizeof(arr)/sizeof(arr[1]);
    for ( int i = 0 ; i < size ; i++) {
        if (arr[i] == x ) {
            flag = true ;
            break;   
        } 
    }

    if ( flag == true ) cout << "Present"<<endl;
    else cout<<"Not Present "<<endl;
}