// take input of 3 triangle values from the user and using them state they can be values of the triangle or not

#include<iostream>
using namespace std;
int main() {
    int t1 , t2 , t3 ;
    cout<<"Enter the first value : ";
    cin>>t1;
    cout<<"Enter the second value : ";
    cin>>t2;
    cout<<"Enter the third value : ";
    cin>>t3;


    if ((t1 + t2 > t3) && (t3 + t1 > t2) && (t2 + t3 > t1) ) {
        cout<<"They can be the sides of triangle ";

    }else {
        cout<<"They can't be sides of triangle ";
    }


    
}