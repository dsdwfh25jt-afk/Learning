#include<iostream>
using namespace std;
int main() {
    // print the absulate value of an integer 
    // example 
    // input  6   ans  = 6 
    // inpt  -4   ans  = 4 
    // in short just remove the sign from the integer 

    int num1 ;
    int num2 = 0;
    cout<<"Enter the integer : ";
    cin>>num1;

    if (num1 > 0) {
        num2 =  num1;
        cout<<"The absolute value of input is : "<<num2;
    } else {
        num2 = num1 * (-1);
        cout<<"The absolute value of input is : "<<num2;
    }



}