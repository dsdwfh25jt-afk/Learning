// given marks of the student if the marks are greater than 35 then print pass 
// otherwise print fail without using if else statement 

#include<iostream>
using namespace std;
int main() {
    int marks ;
    cout<<"Enter the marks : ";
    cin>>marks;

    marks >= 35 ? cout<<"pass" : cout<<"fail";
    
}