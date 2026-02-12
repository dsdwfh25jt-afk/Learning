#include<iostream>
using namespace std;
int main() {

    int num1 ;
    cout<<"Enter the number : ";
    cin>>num1;

    // checking wheather number is even or not 
    if (num1 %2 == 0) {
         cout<<"Given Number is Even ."<<endl;
        return 0; // return means terminate the execution here 
        } 
    // if the upper statement is false then this will run 
    cout<<"Given Number is Odd ."<<endl;

    return 0; // return means terminate the execution here 
 
}