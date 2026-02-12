// write a program to reverse the array without using extra array 

#include<iostream>
#include<vector>

using namespace std;
int main() {
    // vector declaration 
    vector<int> vec  = {1,2,3,4,5,6,7,8,9}; 

    // printing the elements 
    for (int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";
    cout << endl;

    // reversing the array 
    for ( int i = 0 ;  i <= vec.size() / 2 ; i++ ) {
        int temp ; 
        temp = vec.at(vec.size()-i-1);
        vec.at(vec.size()-i-1) = vec.at(i);
        vec.at(i) = temp ;
    }

    // printing the vector elements
    for (int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";

    // another way to reverse the array 
    // using 2 variables 
    for (int i=0 , j = vec.size()-1 ; i <= j; i++ , j--) {
        int temp ; 
        temp = vec.at(j);
        vec.at(j) = vec.at(i);
        vec.at(i) = temp ;
    }
    cout<<endl;

    // printing the vector elements
    for (int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";

    // we  have another way using while loop 
    int i = 0 , j = vec.size()-1;  
    while (i<=j) {
        int temp = vec.at(i);
        vec.at(i) = vec.at(j);
        vec.at(j) = temp;
        i++;
        j--;
    }
    cout<<endl;

    // printing the vector elements
    for (int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";

}