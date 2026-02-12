// swap 2 numbers 
#include<iostream>
using namespace std;
int swap (int *num1 , int *num2) {
    *num2 = *num1 + *num2 ;

    *num1 = *num2 - *num1 ;
  
    *num2 = *num2 - *num1 ;
 } 
int main() {
    int num1 , num2 ;
    cout<<"Enter the num1 value : ";
    cin>>num1;
    cout<<"Enter the num2 value : ";
    cin>>num2;

    //before 
    cout<< num1 <<endl;
    cout<< num2 <<endl; 
    swap(&num1,&num2);
    
    //after 
    cout<< num1 <<endl;
    cout<< num2 <<endl;
}