// write a program to tell wheather input is divisible by 5 or 3
#include<iostream>
using namespace std;
int main() {
    int num1;
    cout<<"Enter the a number : ";
    cin>>num1;

    if (num1%3 == 0 || num1%5 == 0) {
        cout<<"Number is divisible by 5 or 3 "<<endl;
    }else {
        cout<<"Number is not divisible by 5 or 3 "<<endl;
    }
} 