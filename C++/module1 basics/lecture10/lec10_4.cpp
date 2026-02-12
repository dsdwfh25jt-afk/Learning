// Q )  take integer as a input and print input divede by 2 
// but using typecasting 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<< "Enter the number : ";
    cin>> num1;
    // cout<<num1/2.0;  // this is without using typecasting 
    float num2 = float (num1);
    cout<<num2 / 2;
}