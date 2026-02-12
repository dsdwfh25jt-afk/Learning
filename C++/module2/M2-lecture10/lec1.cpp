// switch statements
// write a program to print week days using switch statement 

#include<iostream>
using namespace std;
int main() {

    int num1;
    cout<<"Enter the week number / week day number : ";
    cin>>num1;
    switch(num1) {
        case 1 :
            cout<<"Sunday";
            break;
        case 2 : 
            cout<<"Monday";
            break;
        case 3 : 
            cout<<"Tuesday";
            break;
        case 4 : 
            cout<<"Wednesday";
            break;
        case 5 : 
            cout<<"Thusday";
            break;
        case 6 : 
            cout<<"Friday";
            break;
        case 7 : 
            cout<<"Saturday";
            break;
        default : 
            cout<<"Enter valid number between 1 to 7 ";
    }
}