// take a possitive integer as input and tell wheather it is divisible by 5 and 3  or not 

#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter the number / integer : ";
    cin>>num1;

    if (num1 % 3 == 0 ) { 
        if (num1 % 5 == 0 ) { 
            cout<<"The number / integer is divisible by 5 and 3 ";
        }else {
            cout<<"The number / integer is divisible by 3 only ";
        }
    }else{
            cout<<"The Numer / integer is not divisible by 5 and 3 ";
        } 
}