// write a program to create a calulator which perfrom basic arethmetic operations 
// using switch statement 

# include <iostream>
using namespace std;
int main() {
    int num1 , num2 ;
    char opr ;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<< "Enter operator / perfrom from  + - * /  : ";
    cin>>opr;
    cout<<"Enter Second number : ";
    cin>>num2;

    switch(opr) {
        case '+' : 
            cout<<num1+num2;
            break;
        case '-' : 
            cout<<num1-num2;
            break;
        case '*' : 
            cout<<num1*num2;
            break;
        case '/' : 
            cout<<num1/num2;
            break;
        default : 
         cout<<"Please enter valid operation ..!";
        
    
    } 
}