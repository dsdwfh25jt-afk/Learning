#include<iostream>
using namespace std; 
int main() {
    int num1 ;
    cout<<"Enter a Number : ";
    cin>>num1;

    if(num1 % 2 == 0) {
        cout<<"Given Number is Even : ";
    }else {
        cout<<"Given Number is Odd .";
    }
}