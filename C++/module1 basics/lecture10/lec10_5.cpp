// take a flaot input and print the fractional part of the real numeber 

#include<iostream>
using namespace std;
int main() {
    float num1 ;
    cout<<"Enter the floating point numeber : ";
    cin>>num1;
    int num2 = int(num1);
    if (num2<0) num2-=1 ;
    float num3  ;
    num3 = num1 - num2;
    cout<<num3;
     
}