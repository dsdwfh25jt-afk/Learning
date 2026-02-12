// Q4. Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;
int count(int num1) {
    int count = 0 ;
    while ( num1 > 0) {
        count ++;
        num1=num1/10;
    }
    return count * count ;

}

int count(int num1,int num2) {
    int count = 0 ;
    while ( num1 > 0) {
        count ++;
        num1=num1/10;
    }
    return count * count ;

}
int main() {
    int num1 ;
    cout<<"Enter a number  : ";
    cin>>num1;
    cout<<count(num1)<<endl;
    cout<<count (num1 ,6)<<endl;

}