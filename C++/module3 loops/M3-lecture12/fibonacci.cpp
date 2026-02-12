// print fibonacci series 
#include<iostream>
using namespace std;
int main() {
    int iterations; // user input for iterations 
    int num1 , num , sum;
    sum = 0 ;  // product 
    num1 = 0 ; // first number 
    num = 1 ;  // last number 
    cout<<"Enter total number of itereatios : ";
    cin>>iterations;
    for ( int i = 1 ; i<iterations; i++ ) {
        sum = num1 + num ; // last + second last number 
        num1 = num ; // num1 will be = second last 
        num = sum ; // num will be last 
    }
    // printing total / last iteration
    cout<<sum<<endl;
}