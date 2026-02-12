// print all the factorials upto n 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter Number : ";
    cin>>num1;
     int fact = 1 ;
    for (int i = 1 ; i <= num1 ; i++) {
        fact *= i ;
        cout<<"Factorial of "<<i<<" is "<<fact<<endl;
    }
}