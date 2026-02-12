// Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
void odd( int num1 , int num2 ) {
    for  (int i = num1 ; i <= num2 ; i++) {
        if (i % 2 != 0) cout<< i<<endl;
    }
}
int main() {
    int num1 ;
    int num2;
    cout<< "Give a number from you want to print ...";
    cin>>num1;
    cout<<"Enter a number where you want to end the print ...";
    cin>>num2;
    odd(num1, num2);
}