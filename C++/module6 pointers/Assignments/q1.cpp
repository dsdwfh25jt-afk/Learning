// write a program of a function to write sum of two numbers using pointers 
#include <iostream>
using namespace std;
int total ( int *ptr1 , int *ptr2 , int *sum ) {
        *sum = *ptr1 + *ptr2 ;
}
int main() {
    int num1 , num2 , sum ;
    cout << "Enter the value of Num1 : ";
    cin>> num1 ;
    cout << "Enter the value of Num2 : ";
    cin>> num2 ;


    int *ptr1 = &num1 ;
    int *ptr2 = &num2 ;
    int *ptr3 = &sum  ;

    total(ptr1 , ptr2 , ptr3);

    cout << "The sum of num1 and num2 is : " << sum << endl;

    
}