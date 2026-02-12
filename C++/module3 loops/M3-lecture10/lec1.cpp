// wap to print reverse of a given number 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter a Number : ";
    cin>>num1;
    int reverse = 0;
    
    while(num1 >=1) {
        reverse *= 10 ;
        reverse += num1 % 10 ;  
        num1 /= 10 ;      
  }

    cout<<"Reverse of input is : "<<reverse<<endl;
}